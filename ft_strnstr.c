/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:50:42 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/14 22:33:26 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* localiza un substring en un string */

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	position; 

	if (*needle == '\0') // si mi string buscado es igual a 0,
		return ((char *)haystack); //retorno un puntero al string de origen.
	position = ft_strlen((char *)needle); //almaceno la longitud del string buscado.
	while (*haystack != '\0' && len-- >= position) //mientras mi string de origen sea distinto de cero && el tamaño de mi buffer disminuyendo en 1, 
	//sea mayor o igual que la longitud del string buscado. 
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, position) == 0) //si mi string de origen == string buscado y la invocacion a memcmp es igual a 0
			return ((char *)haystack); //retorno un puntero al string de origen.
		haystack++;//avanzo iterando el string.
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Marvinesmiamor";
	char	needle[] = "ar";

	unsigned int	len = 10;

	printf("Mine: %s\n", ft_strnstr(haystack, needle, len));
	printf("Original: %s\n", strnstr(haystack, needle, len));
	return (0);
}
*/