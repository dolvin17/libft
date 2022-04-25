/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:28:15 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:21:05 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* convierte mayúsculas a minúsculas */

int	ft_tolower(int c)//el char a modificar.
{
	if (c >= 'A' && c <= 'Z')//si c es alfabeticamente mayuscula
		return (c + 32);//sumo 32 en ascci para llegar a su equivalente en minuscula.
	return (c);//si c ya era mayuscua, la retorno sin modificacion alguna. 
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower('B'));
	printf("%d\n", tolower('B'));
}
*/