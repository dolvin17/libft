/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:35:39 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/20 21:36:37 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* toma un elemento y libera la memoria y el elemento */

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst) //si el nodo no existe
		return ; //no hago nada. 
	if (del) //si del es distinto de null. 
		del(lst->content); //aplico del al contenido del nodo actual. 
	free(lst);//libero la memoria tras eliminar el contenido. 
}
