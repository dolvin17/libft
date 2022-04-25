/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:26:14 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/22 00:01:08 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/* crea un nuevo string aplicando sucesivas veces la funcion 'f'
usando malloc */

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*temp;

	if (!s || !f) //si el string o f no existen
		return (NULL);
	temp = malloc(sizeof(char) * ft_strlen(s) + 1); //guardo la reserva de memoria creadacon malloc * la longitud del string +1 para el char nulo
	if (!temp) //si la reserva falla
		return (NULL);
	i = 0; //seteo i a cero.
	while (i < (ft_strlen((char *)s))) //mientras i < longitud de s 
	{
		temp[i] = f(i, s[i]); // mi reserva de memoria = los cambios que aplique la funcion f sobre mi string en la posicion i. 
		i++; //avanzo aplicando f a todo el string.
	}
	temp[i] = '\0'; //cierro mi string nuevo con contrabarra cero. 
	return (temp); //retorno el nuevo string. 
}
/*
char X(unsigned int i, char str) //emula el comportamiento de la funcion f. 
{

	printf("My own function: %d %c\n", i, str);
	return (str + 32);
}
int	main(void)
{
	char s[] = "MARVIN";
	char *result;

	printf("the result is: %s\n", s);
	result = ft_strmapi(s, X);
	printf("the result is: %s\n", result);
	return (0);
}
*/