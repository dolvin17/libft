/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:56:12 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:18:19 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc un nuevo string, basado en la union
de los dos strings dados como parámetros */

char	*ft_strjoin(char const *s1, char const *s2)//strings a unir. 
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)//si alguno de los strings es nullo. 
		return (NULL);//retorno null. 
	len = ft_strlen(s1) + ft_strlen(s2) + 1;//calculo y almaceno la longitud de los strings a unir.
	str = malloc(sizeof(char) * len);//reservo memoria de la lontigud total de salida.
	if (!str)//si la reserva falla
		return (NULL);//retorno null.
	ft_strlcpy(str, s1, len);//sino, copio en str, el s1 hasta len.
	ft_strlcat(str, s2, len);//contateno en str, el s2 hasta len.
	return (str);//devuelvo string modificado.
}
/*
#include <stdio.h>
int main(void)
{
     char    s1[] = "Marvin ";
     char    s2[] = "es mi amor";
     char    *join = ft_strjoin(s1, s2);
	 
     printf("%s\n", join);
     printf("%ld\n", ft_strlen(s1));
     printf("%ld\n", ft_strlen(s2));
     printf("%ld\n", ft_strlen(join));
 	 //system("leaks a.out");
     return (0);
}*/