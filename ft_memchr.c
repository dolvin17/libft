/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:00:50 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve un puntero a la primera coincidencia de c en *s */

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "catleon";
	int 	c = 'a';
	unsigned char n = 2;

	printf("mine: %s\n", ft_memchr(s, c, n));
	printf("original: %s\n", memchr(s, c, n));
	return (0);
}*/
