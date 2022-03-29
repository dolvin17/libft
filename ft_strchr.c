/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:30:56 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/28 04:26:26 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int __c)
{
	char	c;

	c = __c;
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
/*
int	main(void)
{
	const char	s[] = "karolisilla";
	int	c = 'o';

	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr: %s\n", strchr(s, c));
	return (0);
}*/