/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:50:18 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:01:32 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* igual que memcpy, excepto porque funciona
aunque los objetos hagan overlaping */

void	*ft_memmove(void *__dest, const void *__src, size_t n)
{
	const char	*src;
	char		*dest;

	dest = __dest; //igualo mis punteros al valor de sus parametros. Se han nombrado con guin bajo, porque representan el valor de una variable que no voy a modificar.
	src = __src;
	if (src >= dest) //si source esta en la misma pos que mi dest. 
		return (ft_memcpy(dest, src, n)); // copio todos mis caracteres secuencialmente con memcpyç
	//sino, mientras...
	while (n--) //el tamaño de mi buffer sea distinto de cero. 
		*(dest + n) = *(src + n); // voy copiando cada elemento a la inversa para evitar overlaping. 
	return (__dest);//retorno dest.
}
/*
int	main(void)
{
	char	dest1[] = "Testoing";
	char	dest2[] = "Testoing";
	char	src1[] = "Mango";
	char	src2[] = "Mango";
	size_t	n = 5;
	printf("Original: :%s:\n", memmove(dest1, src1, n));
	printf("Mine: :%s:\n", ft_memmove(dest2, src2, n));
	return (0);
}*/
