/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:26:14 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/04 00:15:30 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*temp;

	if (!s || !f)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
