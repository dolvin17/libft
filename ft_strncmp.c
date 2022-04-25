/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:20:37 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:18:40 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* compara strings, los chars que aparecen después de '\0' no se comparan */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0; //inicializo i
	while (i < n) //mientras i sea menor que el tamño de mi buffer
	{
		if (s1[i] && s1[i] == s2[i]) //si s1 en la posicion i es distinto de cero. y s1 es igual a s2 en la posicion i. 
		{
			while (s1[i] && s1[i] == s2[i] && i < n) //mientras s1 en la posicion i es distinto de cero y s1 es igual a s2 en la posicion i 
			//y mi iterador es menor que el tamaño del buffer. 
				i++; //avanzo. 
		}
		else //sino 
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			//retorno una resta producto de la diferencia de la ultima posicion coincidente. 
		}
	}
	return (0);
}/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "ab";
	char s2[] = "abd";
	unsigned int	n = 4;
	
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1, s2, n));
	return (0);
}*/
