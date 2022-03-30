/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:56:12 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/30 06:35:50 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	ft_strlcat(str, s2, len);
	return (str);
}

int main(void)
{
     char    s1[] = "Marvin ";
     char    s2[] = "es mi amor";
     char    *join = ft_strjoin(s1, s2);
	 
     printf("%s\n", join);
     printf("%ld\n", ft_strlen(s1));
     printf("%ld\n", ft_strlen(s2));
     printf("%ld\n", ft_strlen(join));
 	 //system("leaks a.out");
     return (0);
}