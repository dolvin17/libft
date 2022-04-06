/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 03:05:58 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:34:03 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* envía el char c al fd dado */

void	ft_putchar_fd(char c, int tamalito)
{
	write(tamalito, &c, 1);
}
/*
int	main(void)
{
  ft_putchar_fd('K', 1);
  ft_putchar_fd('\n', 1);
  return (0);
}*/