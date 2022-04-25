/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:30:56 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/14 21:19:46 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve un puntero a la primera coincidencia de c en *s */

char	*ft_strchr(const char *s, int __c)
{
	char	c;

	c = __c; //igualo mis variable al valor de sus parametro de entrada. 
	while (*s != c) //mientras mi puntero no encuentre el char coincidente.
	{
		if (*s == '\0') //si encuentra un contrabarra cero. 
			return (0); //devuelvo cero. 
		s++; //continuo iterando. hasta dar con el. 
	}
	return ((char *)s); // devuelvo un char puntero a la coincidencia.
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