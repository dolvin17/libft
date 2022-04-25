/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:41:42 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/14 21:24:03 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* copia y concatena strings, agrega SRC al final de DST */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen((const char *)dst); // mide y almacena la longitud de un casteo de const char * de dest. 
	s_len = ft_strlen(src); //mide y almacena la longitud de src. 
	i = 0; //inicio acumulador
	j = d_len; // reasigno d_len en la variable j para mejorar mi comprension de la iteracion que voy a realizar.

	if (dstsize <= d_len) //si el tamaño de mi buffer es menor o igual que la longitud de mi destino. 
		return (s_len + dstsize); //devuelvo la longitud de mi origen + el tamaño de mi buffer. 
	while (src[i] && i < dstsize - d_len -1) //mientras el origen en la posicion i, y mi acumulador sean menor que el tamaño del buffer menos la longitud de destino, menos 1.
		dst[j++] = src[i++]; //contateno src en dest, desde la longitud de dest. 
	dst[j] = '\0'; //cierro dest en la posicion final con contrabarra cero. 
	return (d_len + s_len); //devuelvo la suma de las longitudes de la concatenacion de mis dos parametros.
}
/*
int	main(void)
{
	char	dst1[1000] = "Marvin es un gato";
	char	dst2[1000] = "Marvin es un gato";
	char	src[] = " molon";

	size_t	dstsize = 24;
	printf("Mine: %zu\n", ft_strlcat(dst1, src, dstsize));
	printf("dest: %s\n", dst1);
	printf("Original: %lu\n", strlcat(dst2, src, dstsize));
	printf("dest: %s\n", dst2);
	return (0);
}
*/
