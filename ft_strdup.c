/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:37:50 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/31 13:32:15 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	s_len;

	s_len = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (s_len + 1));
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s, s_len);
	d[s_len] = '\0';
	return (d);
}
/*
int	main(void)
{
	const char	s[] = "Caramba";

	printf("Original: %s\n", strdup);
	printf("Mine: %s\n", ft_strdup);
	system("leaks a.out");
	return (0);
}
*/