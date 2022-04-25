/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:41:34 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/22 01:11:21 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* elimina y libera todos los elementos de la lista */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!lst)//si la lista no existe
		return ; //no hago nada. 
	while (*lst != NULL) //mientras mi nodo actual sea distinto de null. 
	{
		pos = (*lst)->next; // guardo la ref DE POS en el siguiente nodo  (NEXT)
		ft_lstdelone(*lst, del); //elimino el nodo y libero la memoria. 
		*lst = pos; //repito la operacion hasta salir del bucle. 
	}
}
