/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:31:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 20:04:15 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
	}
	return (0);
}
/*
int	main(void)
{
	const char	s[] = "karolisillia";
	int	c = 'l';

	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}*/
