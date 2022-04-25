/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:03:55 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/14 22:58:17 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserva con malloc un nuevo string,
se basa en la unión de los dos strings tomados como parametros */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new_s;

	if (!s) //si s no existe retorno null. 
		return (NULL);
	if (ft_strlen((char *)s) < start) //si la longitud de s < que la longitud desde donde quiero copiar. 
		len = 0; //el tamaño de mi buffer es igual a cero. 
	if (ft_strlen((char *)s + start) < len) //si la longitud de s + la longitud desde donde copiar es < que el tamaño de mi buffer
		len = ft_strlen((char *)s + start); //el tamaño de mi buffer sera igual a la longitud de s + la longitud a crear. 
	new_s = malloc(sizeof(char) * (len + 1)); //en news_ reservo la memoria para el tamaño total de mi buffer + 1 para el char nulo. 
	if (!new_s) //si la reserva falla. 
		return (NULL); //retorno nulll. 
	i = 0; //inicializo i. 
	while (start < ft_strlen((char *)s) && s[start + i] && i < len) 
	//mientras la longitud de inicio del nuevo string < la longitud de s && s en la posicion de inicio +1 sea distinto de cero && mi acumulador 
	//sea menor que el tamaño de mi buffer. 
	{
		new_s[i] = s[start + i]; //la reserva de memoria en la posicion i = s en la posicion que quiero copiar + lo acumulado.
		i++; //avanzo. 
	}
	new_s[i] = '\0'; //cierrro mi nuevo string con contrabarra 0. 
	return (new_s); //retorno el nuevo string. 
}
/*
int	main(void)
{
	char	*str;

	str = ft_substr("Marvin is still being a cat", 5, 50);
	printf("%s\n", str);
	return (0);
}*/
