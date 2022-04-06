/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:51:11 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 23:50:01 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copia n bytes del área de memoria apuntada por *src
al área de memoria apuntada por *dest*/
/*!! *src & *dest no deben hacer overlaping */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dp;
	const unsigned char		*sp;

	if (!dest && !src)
		return (0);
	dp = dest;
	sp = src;
	while (n--)
	{
		*dp++ = *sp++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "marvin5";
	char	src[] = "abcdcd";
	unsigned n = 5;

	printf("mine: %s\n", ft_memcpy(dest, src, n));
	printf("original: %s\n", memcpy(dest, src, n));
	return (0);
}*/