/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:23:20 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:25:13 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convierte un string en números de tipo int */

int	ft_atoi(const char *str)
{
	unsigned long	num;
	int				sign;

	num = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str)) //estoy en un digito. 
	{
		num = num * 10 + (*str - '0'); //mi acumulador va a ser igual a lo acumulado hasta este punto multiplicado el nº * 10 + el valor decimal de mi acumulador, esto ocurre restando la representacion ascii decimal de mi valor - 0. 
		if (num > 9223372036854775808UL && sign == -1) // para controlar overflow. si lo acumulado hasta este punto es mayor que el valor min de unsigned long.
			return (0);
		if (num > 9223372036854775807UL && sign == 1) //si lo acumulado hasta este punto es mayor que el valor max de unsigned long.
			return (-1);
		str++; //continuo iterando hasta salir del bucle. 
	}
	return (num * sign); //devuelvo mi numero multiplicado por mi signo.
}
/*
int	main(void)
{
	const char	test1[] = "		4693"; //tiene whitespaces al inicio
	const char	test2[] = "-4693"; //tiene signo - al inicio
	const char	test3[] = "+493"; // tiene signo + al inicio
	const char	test4[] = "+-----4982"; // tiene mas de 2 signos al inicio
	const char	test5[] = "a493"; // tiene letras al inicio
	const char	test6[] = "@493"; //tiene simbolos al inicio
	const char	test7[] = "43-32456"; //tiene simbolos en el medio
	const char	test8[] = "-56 5 2-876";//tiene simbolos en medio
	const char	test9[] = "\7893";//tiene un caracter no imprimible al inicio
	printf("Original: %i\n", atoi(test1));
	printf("Mine: %i\n", ft_atoi(test1));
	printf("Original: %i\n", atoi(test2));
	printf("Mine: %i\n", ft_atoi(test2));
	printf("Original: %i\n", atoi(test3));
	printf("Mine: %i\n", ft_atoi(test3));
	printf("Original: %i\n", atoi(test4));
	printf("Mine: %i\n", ft_atoi(test4));
	printf("Original: %i\n", atoi(test5));
	printf("Mine: %i\n", ft_atoi(test5));
	printf("Original: %i\n", atoi(test6));
	printf("Mine: %i\n", ft_atoi(test6));
	printf("Original: %i\n", atoi(test7));
	printf("Mine: %i\n", ft_atoi(test7));
	printf("Original: %i\n", atoi(test8));
	printf("Mine: %i\n", ft_atoi(test8));
	printf("Original: %i\n", atoi(test9));
	printf("Mine: %i\n", ft_atoi(test9));
	return (0);
}*/
