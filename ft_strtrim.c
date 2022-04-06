/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:11:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:28:06 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y devuelve una copia de s1, con los chars
dados en 'set', eliminados del principio y del fin */

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