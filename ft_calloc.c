/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:38:19 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:36:30 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/* asigna memoria y la inicializa y rellena con zero */

void	*ft_calloc(size_t count, size_t size) //parametros de entrada, cantidad de elementos y tamaño de los mismos.
{
	unsigned char	*p;
	size_t			i;

	p = NULL; //igualo mi puntero a null (puede estar tomando como referencia en memoria un area ocupada por otro programa)
	if (!count || (count && SIZE_MAX / count > size)) // si mi contador es 0, o mi contador es distinto de 0. 
	//y la division entre size_max (que es el valor max para size_t en esta arquitectura) entre count es mayor que el tamaño de mi buffer, continuo.
	{
		p = malloc(count * size); //reservo con malloc multiplicando la cantidad de elementos por su tamaño. 
		if (p != NULL)
		{
			i = 0; //inicializo i,
			while (i < count * size) //mientas acumulador sea menor que la reserva que hice con malloc
				*(p + i++) = '\0';// avanzo en la iteracion con mi puntero seteando toda esa memoria hasta contrabarra 0. 
		}
	}
	return (p); //retorno un puntero. 
}
/*
# include <stdio.h>
 int	main(void)
 {
 	size_t count = 12;
 	size_t size = 36;
 	void *mine = ft_calloc(count, size);
	printf("Mine: %p\n", mine);
	free(mine);
 	void *original = calloc(count, size);
 	printf("Original: %p\n", original);
 	free(original);
 	system("leaks a.out"); //comprobar leaks de memoria. 
 	return (0);
 }*/