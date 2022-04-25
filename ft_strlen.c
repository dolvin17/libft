/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:55:56 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:20:56 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* calcula la longitud de un string */

//contar el tamaño de un buffer. 

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0; //contador igual a cero. 
	while (s[i] != '\0') //mientras mi string en la posicion i sea distinto de 0. 
		i++; //aumento mi iterador. 
	return (i); //retorno lo que pude iterar hasta este punto.
}
/*
#include <stdio.h>
#include <string.h>

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