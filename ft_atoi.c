/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:23:20 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 16:58:29 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long int	num;
	long int	sign;

	num = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' && (ft_isdigit(*(nptr + 1))))
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	if (*nptr == '+' && (ft_isdigit(*(nptr + 1))))
		nptr++;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + *nptr - '0';
		if (num * sign < -2147483648)
			return (0);
		else if (num * sign > 2147483647)
			return (-1);
		nptr++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	const char	test1[] = "		456"; //tiene whitespaces al inicio
	const char	test2[] = "-456"; //tiene signo - al inicio
	const char	test3[] = "+456"; // tiene signo + al inicio
	const char	test4[] = "+-----456"; // tiene mas de 2 signos al inicio
	const char	test5[] = "a456"; // tiene letras al inicio
	const char	test6[] = "@456"; //tiene simbolos al inicio
	const char	test7[] = "45-789"; //tiene simbolos en el medio
	const char	test8[] = "-4 5 6-789";//tiene simbolos en medio
	const char	test9[] = "\04";//tiene un caracter no imprimible al inicio
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
}
*/