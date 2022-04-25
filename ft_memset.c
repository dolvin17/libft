/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:03:02 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:01:30 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* sustituye el buffer de *s con c */

void	*ft_memset(void *s, int c, size_t n) //string, valor por el sustituyente y el tamaño de buffer
{
	unsigned char	*ptr;

	ptr = s; 
	while (n--) //mientras el buffre distinto de cero.
	{
		*ptr++ = c; //mi puntero igual a c y paso a la siguiente referencia de  memoria. 
	}
	return (s); // devuelvo el string modificado
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	buffer1[] = "This is a test";
	char	buffer2[] = "This is a test";

	printf("Original:\n");
	printf("Before: %s\n",buffer1);
	memset(buffer1, '*', 4);
	printf("After: %s\n", buffer1);

	printf("Mine: \n");
	printf("Before: %s\n", buffer2);
	ft_memset(buffer2, '*', 4);
	printf("After: %s\n", buffer2);
	return (0);
}*/
