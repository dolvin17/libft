/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:53:03 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:39:36 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* testea cualquier char en busca de dígitos del 0 al 9 */

int	ft_isdigit(int c)

{
	return ((c >= '0') && (c <= '9'));
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('8'));
	printf("%d\n", ft_isdigit('k'));
	return (0);
}*/
