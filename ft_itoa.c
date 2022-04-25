/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:52:03 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/20 21:27:18 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y convierte en entero 
un conjunto de chars */

static size_t	ft_num_len(int n) //retorna la cantidad de digitos. 
{
	size_t	len; //acumulador

	len = 0;
	if (n == 0)//si mi núm es 0, aunque sea cero, pobrecito mio tiene una longitud. 
		len = 1;//la longitud valdrá 1.
	if (n < 0)//si mi núm, es menor que cero
	{
		n *= -1; //multiplico n * -1 para obtener el valor positivo.
		len++; //continuo acumulando
	}
	while (n != 0) //mientras sea distinto de cero. (tanto positivo como negativo)
	{
		(n /= 10); //divido entre 10 para obtener la cantidad de posibles digitos
		len++; //y continuo acumulando
	}
	return (len); //retorno la len acumulada.
}

char	*ft_itoa(int n)
{
	size_t		nlen; //pa guardar la longitud. 
	char		*nstr; //pa pa la reserva de memoria. 
	long int	nbr; //pal número que voy a convertir.

	nlen = ft_num_len(n); 
	nbr = n;
	nstr = (char *)malloc(sizeof(char) * (nlen + 1)); //+1 para el caracter null. 
	if (!nstr)//si la reserva falla
		return (NULL);//retorno null.
	nstr[nlen--] = '\0'; // igualo mi elemento en la ultima posicion de la longitud al contrabarra cero. 
	if (nbr == 0) //si el num es 0.
		nstr[nlen] = '0'; //seteo mi posicion a 0. 
	if (nbr < 0) //si el num es menor que zero.
	{
		nstr[0] = '-'; //agrego signo menos a la posicion 0. 
		nbr *= -1; //multiplico * -1 el valor que tengo para pasarlo a positivo. 
	}
	while (nbr > 0)//mientras sea mayor que cero mi num. 
	{
		nstr[nlen--] = '0' + (nbr % 10);  //agrego la representacion en ascci decimal de este numero, dividiendo entre %10 para obenter la unidad. + el valor ascii de 0.
		nbr /= 10;// y voy dividiendo entre 10 hasta que salga del bucle. 
	}
	return (nstr);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}*/