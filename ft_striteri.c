/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:58:24 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:15:15 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* aplica la función 'f' a cada char del string, 
usa su indice como primer arg */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)//si s o f son nulos. 
		return ;//no hago nada. 
	i = 0;
	while (s[i])//mientras s exista. 
	{
		f(i, &s[i]);//aplico f a cada char de s. 
		i++;//continuo interando hasta salir del bucle.
	}
}
