/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:51:11 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 19:11:45 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dp;
	const unsigned char		*sp;

	if (!dest && !src)
		return (0);
	dp = dest;
	sp = src;
	while (n-- > 0)
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