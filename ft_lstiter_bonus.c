/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:32:48 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/22 01:22:24 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* itera lst y aplica 'f' al contenido de cada elemento */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pos;

	if (!lst) //si el nodo no existe.
		return ; //no hago nada. 
	pos = lst; //igualo pos a lst.
	while (pos != NULL) // mientras el nodo sea distinto de null. 
	{
		(*f)(pos->content); //aplico f al contenido de mi nodo
		pos = pos->next; // apunto mi nodo actual al siguiente nodo.
	}
}
