/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:11:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/22 01:14:29 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y devuelve una copia de s1, con los chars
dados en 'set', eliminados del principio y del fin */

//corta todos los chars que estan al principio de un string que le paso como parametro y al final de ese string. 
//lo que espera strim no es un char, sino un conjunto de chars. por ello es un puntero de char //

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_to_cut;
	char	*str;

	if (!s1 || !set) //si el string o el set no existen
		return (NULL); 
	while (ft_strchr(set, *s1) && *s1 != '\0') //mientras encuentro mi char actual del string en el set de chars a recortar. 
	//y no he llegado al final de mi string.
		s1++; //voy sumando en 1, porque estoy encontrando los chars que tengo que recortar del principio de mi string.
	len_to_cut = ft_strlen(s1); //luego obtengo la longitud desde ese punto de chars recortados de mi string.
	while (len_to_cut && ft_strchr(set, s1[len_to_cut])) //si la longitud es distinta de cero. y desde la posicion final de mi string sigue existiendo
	//en mi set de chars a borrar, 
		len_to_cut--; //disminuyo la variable longitud en 1. para obtener el indice hasta donde recortar mi string. 
	str = ft_substr(s1, 0, len_to_cut + 1); //luego hago un substr desde donde me quede con los chars recortados del principio con su indice en 0, 
	//porque va aumentando el puntero del string en 1 hasta el indice que encontre donde ya no se cumple esta condicion +1 porque el substr espera un tamaño.
	return (str); //retorno todo lo que pude crear. 
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("oooooMarvinoooooo", "o"));
	return (0);
}
*/