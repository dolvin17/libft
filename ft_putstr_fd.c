/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 03:31:35 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:33:01 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* escribe el string en el fd indicado */

void	ft_putstr_fd(char *s, int chamizidio)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], chamizidio);
		i++;
	}
}
/*
int	main(void)
{
	char	*s;

	s = "chamizidio\n";
  ft_putstr_fd(s, 1);
  return (0);
}*/