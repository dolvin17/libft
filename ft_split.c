/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:06:13 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 22:56:15 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y devuelve un array de strings 
separa s con c como delimitador */

static int	ft_count_words(char const *s, char c) //cuenta palabras. recibe string y delimitador. 
{
	int	nb; //representa n de palabras.
	int	i; //iterar palabra. 

	nb = 0;
	i = 0;
	while (s[i]) //iteramos toda la palabra. (mientras s sea distino de contrabarra 0)
	{
		while (s[i] == c) //(mientas s en la posicion i sea igual al delimitador)
			i++; //avanzamos
		if (s[i] != '\0') //si avanzamos y s, en la posicion i actual, no es igual a contrabarra 0, quiere decir que es una nueva palabra.
			nb++; //añadimos 1 palabra a nuestro contador.
		while (s[i] && s[i] != c) //mientras s en la posicion i exista y sea distinta del delimitador.
		//avanzamos y cada vez que se tope con una nueva palabra, en la primera letra de cada palabra, se va a sumar 1 al contador de palabra.
			i++;
	}
	return (nb);
}

static char	*ft_place_word(char const *s, char c) //recibo la cantidad de chars a copiar. 
{
	char	*word; //gurdar la palabra
	int		i;
	int		len;

	len = 0;
	while (s[len] && s[len] != c) //recorro todo el string hasta saber su len. 
			len++;
	word = (char *)malloc(sizeof(char) * (len +1));//guardo espacio con malloc para la pababra mas 1 para el char nulo. 
	if (!word)
		return (NULL);
		//sino
	i = 0; //seteo en 0 mi iterador 
	while (i < len) 
	{
		word[i] = s[i]; //asigno de uno en uno los elementos de mi string a copiar a su respectiva posicion en malloc
		i++;
	}
	word[i] = '\0'; //cierro mi palabra con contrabarra cero.
	return (word); //retorno la palabra creada. 
}

static char	*ft_cpy_str(int i, char const *s, char c, char **res) //espera un int i, que es la posicion donde voy a copiar mi palabra.
{

	//metemos las palabtas dentro del aryay de strings.
	res[i] = ft_place_word(s, c); 
	if (!res[i])// si la reserva para la nueva palabra falla,  limpio TODAS las reservas de memoria que hice anteriormente. 
	{
		while (i > 0) 
		{
			i--;
			free(res[i]); //por elemento dentro de mi arreglo. es decir liberas una palabra. 
		}
		free(res); //al final por el puntero de mi arrelo. 
		return (NULL); //y retorno null. 
	}
	//si nada falla, retorno la palabra creada. 
	return (res[i]); 
}

char	**ft_split(char const *s, char c)
{
	int		nb_words;
	int		i;
	char	**res; //puntero a un puntero.

	if (!s)
		return (NULL);
	i = 0; //contador
	nb_words = ft_count_words(s, c); //cuenta las palabras
	res = (char **)malloc(sizeof(char *) * (nb_words + 1)); //reserva multiplicado por el numero de palabras + 1
	if (!res)
		return (NULL);
	while (i < nb_words)
	{//luego mientras
		while (*s == c) //mientras mi puntero encuentra el delimitador
			s++; //avanzamos
		if (*s != '\0') 
			res[i] = ft_cpy_str(i, s, c, res); //mi array en la posicion i = copio una nueva palabra
		while (*s && *s != c)
			s++; //avanzamos con la palabra. 
		i++; //aumento el contador de mis palabras en 1. 
	}
	res[i] = 0; //el arreglo //en la pos i es igual a cero. 
	return (res); //retorno lo creado. 
}

#include <stdio.h>

int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("buenos dias bueenas tardes buenas noches", 32);
	while (i < 7)
	{
		printf("string: %d %s\n", i, tab[i]);
		i++;
	}
	//system ("leaks a.out");
	return (0);
}