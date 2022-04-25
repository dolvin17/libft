/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 06:37:50 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:14:16 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* asigna memoria suficiente para una copia de *s,
hace la copia y devuelve un puntero*/

char	*ft_strdup(const char *s)//string a copiar.
{
	char	*d;
	size_t	s_len;

	s_len = ft_strlen(s);//almaceno la longitud de s
	d = malloc(sizeof(char) * (s_len + 1));//d= reserva de memoria de la longitud + 1. 
	if (d == NULL)//si la reserva falla
		return (NULL);//retorno null.
	ft_memcpy(d, s, s_len); //copiar mi string a un area de memoria nueva apuntada por D, hasta len
	d[s_len] = '\0';//cierro el final del string con contrabarra cero.
	return (d);//retorno puntero. 
}
/*
int	main(void)
{
	const char	s[] = "Marvin";

	printf("Original: %s\n", strdup);
	printf("Mine: %s\n", ft_strdup);
	system("leaks a.out");
	return (0);
}
*/