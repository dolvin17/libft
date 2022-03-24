/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:41:42 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 19:42:46 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen((const char *)dst);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	if (dstsize <= d_len)
		return (s_len + dstsize);
	while (src[i] && i < dstsize + d_len -1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (d_len + i);
}
/*
int	main(void)
{
	char	dst1[1000] = "Marvin es un gato";
	char	dst2[1000] = "Marvin es un gato";
	char	src[] = " molon";

	size_t	dstsize = 24;
	printf("Mine: %zu\n", ft_strlcat(dst1, src, dstsize));
	printf("dest: %s\n", dst1);
	printf("Original: %lu\n", strlcat(dst2, src, dstsize));
	printf("dest: %s\n", dst2);
	return (0);
}
*/
