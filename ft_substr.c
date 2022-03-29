/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:03:55 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/29 22:36:00 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*new_s;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < start)
		len = 0;
	if (ft_strlen((char *)s + start) < len)
		len = ft_strlen((char *)s + start);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int	main(void)
{
	char	*str;

	str = ft_substr("Marvin is still being a cat", 5, 50);
	printf("%s\n", str);
	return (0);
}*/
