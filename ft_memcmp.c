/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:01:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:44:51 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* compara los primeros n bytes de las áreas de memoria de *s1 y s2* */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return ((*((unsigned char *)s1 + i)) - *((unsigned char *)s2 + i));
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