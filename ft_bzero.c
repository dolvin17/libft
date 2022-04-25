/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:43:01 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:27:10 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reemplaza el tamaño de mi buffer por zeros.
no seais como yo, mejor usar memset, insensatos */

void	ft_bzero(void *s, size_t n) //setear todos los elementos de s hasta llenar el buffer, con zeros. 
{
	int	i; 

	i = 0; // contador a cero 
	while (n--) //mientas n no llegue a cero (buffer lleno de zeros)
		((unsigned char *)s)[i++] = '\0'; // voy seteando S en la posicion i, = al contrabarra cero. 
		//y dentro aprovecho a i++ para posicionarme al siguiente caracter mientras itero. 
}
/*
int	main(void)
{
    char buffer1[] = "This is a test";
    char buffer2[] = "This is a test";

    printf("Before Original: %s\n", buffer1);
	bzero(buffer1, '\0');
    printf("After Original: %s\n", buffer1);
    printf("Before Mine: %s\n", buffer2);
    ft_bzero(buffer2, '\0');
    printf("After Mine: %s\n", buffer2);
    return (0);
}*/
