/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 05:06:44 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/07 21:54:51 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* escribe el string en el fd, seguido de /n */

void	ft_putendl_fd(char *s, int fd)
{
	if (fd > 0)
		ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
	char	*s;

	s = "chamizidio";
	ft_putendl_fd(s, 1);
	return (0);
}*/