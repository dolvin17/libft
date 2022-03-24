/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:55:56 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 19:53:14 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%zu\n", ft_strlen("Clarkent"));
	printf("%zu\n", ft_strlen("Hello"));
	printf("%zu\n", ft_strlen("-1"));
	printf("%zu\n", ft_strlen("Marvin"));
	printf("\n");
	printf("%zu\n", strlen("Clarkent"));
	printf("%zu\n", strlen("Hello"));
	printf("%zu\n", strlen("-1"));
	printf("%zu\n", strlen("Marvin"));
	return (0);
}
*/
