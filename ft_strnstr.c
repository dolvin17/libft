/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:50:42 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 20:02:13 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	position;

	if (*needle == '\0')
		return ((char *)haystack);
	position = ft_strlen((char *)needle);
	while (*haystack != '\0' && len-- >= position)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, position) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Marvinesmiamor";
	char	needle[] = "ar";

	unsigned int	len = 10;

	printf("Mine: %s\n", ft_strnstr(haystack, needle, len));
	printf("Original: %s\n", strnstr(haystack, needle, len));
	return (0);
}
*/