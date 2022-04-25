/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 03:05:58 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:03:30 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* envía el char c al fd dado */

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)//si el file descriptor dado como parametro es mayor que cero. 
		write(fd, &c, 1);//paso como input el file descriptor y hago el write correspondiente. 
}
/*
int	main(void)
{
  ft_putchar_fd('K', 1);
  ft_putchar_fd('\n', 1);
  return (0);
}*/