/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:38:19 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 17:14:18 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(nitems * size)))
		return (NULL);
	ft_bzero(ptr, nitems);
	return (ptr);
}
