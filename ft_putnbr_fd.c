/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:47:07 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:11:31 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* escribe el número 'n' en el fd dado */

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)//si el file descriptor dado como parametro es menor que cero.
		return ; //no hago nada. 
	if (n == -2147483648)//si el numero dado es igual al minimo valor que cabe en un int.
	{
		ft_putchar_fd('-', fd);//escribo el signo
		ft_putchar_fd('2', fd);//escribo un '2'
		ft_putnbr_fd(147483648, fd);//recursivamente escribo el resto del numero pasandolo como parametro.
	}
	else if (n < 0)//sino si el numero es negativo
	{
		ft_putchar_fd('-', fd);//escribo el signo
		ft_putnbr_fd(n * -1, fd);//recursivamente multipico el numero por -1 para pasarlo a positivo y escribirlo detrás del signo. 
	}
	else if (n < 10)//si el numero es menor que 10. 
		ft_putchar_fd((char)(n + '0'), fd);//escribo mi numero +0 o su representacion en ascci (48)
	else
	{
		ft_putnbr_fd(n / 10, fd);//recursivamente divido mi numero entre 10 para sacar las unidades. (y lo escribo)
		ft_putchar_fd(n % 10 + '0', fd);//mi numero entre %10 + su representación en asci, o 0. 
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
