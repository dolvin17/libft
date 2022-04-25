/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:31:57 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:54:34 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* añade el elemento new al principio de la lista */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)//si no hay lista o es nula su ref.
	{
		new->next = NULL;//mi nuevo nodo apuntará directamente a null.
		*lst = new;//habré creado una nueva lista con un unico nodo. 
	}
	else//sino, si existe una lista. 
	{
		new->next = *lst;//mi nuevo nodo apuntará a la referencia de la lista y se colocará como el primero. 
		*lst = new;//habré añadido mi nodo al inicio de la lista.
	}
}
