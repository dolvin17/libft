/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:14:44 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/05 22:47:42 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* testea en busca de digitos o chars alfabéticos */

int	ft_isalnum(int c)
{
	return ((ft_isdigit(c)) || (ft_isalpha(c)));
}
/*
int	main(void)
{
	printf("%d\n", ft_isalnum('	'));
} */
