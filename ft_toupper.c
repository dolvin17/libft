/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 20:46:35 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:22:21 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* convierte minúsculas a mayúsculas */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')//si c es alfabeticamente minuscula
		return (c - 32);//resto 32 en ascci para llegar a su equivalente en mayuscula.
	return (c);//si c ya era minuscula, la retorno sin modificacion alguna. 
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper('k'));
	printf("%d\n", toupper('k'));
}
*/
