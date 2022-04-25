/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:06:44 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:04:43 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* escribe el string en el fd, seguido de /n */

void	ft_putendl_fd(char *s, int fd)
{
	if (fd >= 0)//si el file descriptor dado como parametro es mayor que cero. 
	{
		ft_putstr_fd(s, fd);//llamo a putstr, le paso el string y fd. 
		ft_putchar_fd('\n', fd);//lamo a putchar para meter el salto de linea en el fd dado. 
	}
}
/*
int	main(void)
{
	char	*s;

	s = "chamizidio";
	ft_putendl_fd(s, 1);
	return (0);
}*/