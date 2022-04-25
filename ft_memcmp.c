/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:01:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/22 01:12:31 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* compara los primeros n bytes de las áreas de memoria de *s1 y s2* */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n) //mientras i < que el tamaño de mi buffer
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
		// si mi string1 + la posicion actual de su puntero == la posición actual del puntero en mi string2
			i++; //avanzo una posicion en ambos strings. 
		else
			return ((*((unsigned char *)s1 + i)) - *((unsigned char *)s2 + i));
			//sino, devuelvo una resta producto de la diferencia de la ultima posicion coincidente. 
	}	
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "100";
	char	s2[] = "126";
	unsigned n = 2;

	printf("mine: %d\n", ft_memcmp(s1, s2, n));
	printf("original: %d\n", memcmp(s1, s2, n));
}
*/