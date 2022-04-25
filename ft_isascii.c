/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:37:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:39:48 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* testea cualquier char en busca ascii chars */

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128); //man ascii para más info
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(127));
}*/
