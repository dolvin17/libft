/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:18 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:38:22 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* testea cualquier char en busca de un char alfabético */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); //metiendo la condicion en un return lo que hago es evaluar directamente si la condicion es verdadera o si es falsa.
}
/*
int	main(void)

{
	printf("%d\n", ft_isalpha('\t'));
	printf("%d\n", isalpha('\t'));
	return (0);
}*/
