/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:31:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 23:10:28 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve y localiza un char* a la última coincidencia en *s */

char	*ft_strrchr(const char *s, int __c)
{
	int		i;
	char	c;

	c = __c;
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
	char s[] = "Karolsilla";
	int	c = 'i';
	
	printf("%s\n", ft_strrchr(s, 't' + 256));
	printf("%s\n", strrchr(s, 't' + 256));
}*/
