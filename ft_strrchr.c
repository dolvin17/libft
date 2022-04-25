/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:31:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/14 22:07:44 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve y localiza un char* a la última coincidencia en *s */
//localizar un char dentro de un string y retorna la posicion ultima donde encuentra ese char //
char	*ft_strrchr(const char *s, int __c)
{
	int		i; //con el uso del compilador convierto mi int _c en un char c.
	char	c;

	c = __c;
	i = ft_strlen((char *)s) + 1; //la longitud de s y le sumo 1 para el char nulo.
	while (i--) //mientras mi iterador no llegue a cero. voy a disminuir en uno este iterador.
	{
		if (*(s + i) == c) // y si la posicion en la que estoy en este momento y su valor es igual al char que estoy buscando
			return ((char *)(s + i)); //retorno desde la direccion en memoria de mi puntero +i para que sea el lugar donde hice la coincidencia casteado como un char * esa posicion para esta coincidencia.
	}
	return (0); //sino, retorno cero. 
}
/*
int	main(void)
{
	char s[] = "Karolsilla";
	int	c = 'i';
	
	printf("%s\n", ft_strrchr(s, 't' + 256));
	printf("%s\n", strrchr(s, 't' + 256));
}*/
