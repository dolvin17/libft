/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:51:11 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:01:35 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copia un área de memoria apuntada por *src
al área de memoria apuntada por *dest*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dp;
	const unsigned char		*sp;

	if (!dest && !src) // si origen o destino son nulos
		return (0);//retorno null. 
	dp = dest; 
	sp = src;
	while (n--)//el tamaño de mi buffer sea distinto de cero. 
	{
		*dp++ = *sp++; //igualo y aumento mi puntero de destino al de la fuente. 
	}
	return (dest);//retorno dest modificado. 
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[] = "marvin5";
	char	src[] = "abcdcd";
	unsigned n = 5;

	printf("mine: %p\n", ft_memcpy(&dest, &src, n));
	printf("original: %p\n", memcpy(&dest, &src, n));
	return (0);
}*/