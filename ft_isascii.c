/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:37:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 16:39:13 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* testea cualquier char en busca ascii chars */

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(127));
}*/
