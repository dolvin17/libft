/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:50:18 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 23:51:06 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* igual que memcpy, excepto porque funciona
aunque los objetos hagan overlaping */

void	*ft_memmove(void *__dest, const void *__src, size_t n)
{
	const char	*src;
	char		*dest;

	dest = __dest;
	src = __src;
	if (src >= dest)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*(dest + n) = *(src + n);
	return (__dest);
}
/*
int	main(void)
{
	char	dest1[] = "Testoing";
	char	dest2[] = "Testoing";
	char	src1[] = "Mango";
	char	src2[] = "Mango";
	size_t	n = 5;
	printf("Original: :%s:\n", memmove(dest1, src1, n));
	printf("Mine: :%s:\n", ft_memmove(dest2, src2, n));
	return (0);
}*/
