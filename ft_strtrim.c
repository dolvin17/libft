/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:11:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/04 00:08:35 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_to_cut;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len_to_cut = ft_strlen(s1);
	while (len_to_cut && ft_strchr(set, s1[len_to_cut]))
		len_to_cut--;
	str = ft_substr(s1, 0, len_to_cut + 1);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("oooooMarvinoooooo", "o"));
	return (0);
}
*/