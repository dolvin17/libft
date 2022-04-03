/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:47:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/04 00:15:25 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize < 1)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = ft_strlen(src);
	return (i);
}
/*
int	main(void)

{
	char	src[] = "Marvin";
	char	dst[] = "Ismycat";
	unsigned int	dstsize;

	dstsize = 3;
	printf("%zu\n", ft_strlcpy(dst, src, dstsize));
	printf("%zu\n", strlcpy(dst, src, dstsize));
	return (0);
}
*/
