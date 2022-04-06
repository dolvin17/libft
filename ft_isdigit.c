/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:53:03 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 16:39:58 by ghuertas         ###   ########.fr       */
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
	return (0);
}*/
