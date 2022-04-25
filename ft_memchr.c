/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:10:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 10:57:49 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve un puntero a la primera coincidencia de c en *s */

void	*ft_memchr(const void *s, int c, size_t n)//recibe string, lo que buscto, y el tamaño del buffer

{
	size_t	i;

	i = 0;
	while (i < n)//mientas i menor 	que el tamaño del buffer. 
	{
		if (*((unsigned char *)s + i) == (unsigned char)c) //si recorriendo s + i encuentro la coincidencia que busco
			return ((void *)s + i);//devuelvo un puntero a la posicion de la coincidencia 
		i++;//aumento desde mi posición.
	}
	return (NULL);//si i > n retorno null. 
}
/*
int	main(void)
{
	char	s[] = "catleon";
	int 	c = 'a';
	unsigned char n = 2;

	printf("mine: %s\n", ft_memchr(s, c, n));
	printf("original: %s\n", memchr(s, c, n));
	return (0);
}*/
