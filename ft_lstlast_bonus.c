/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:51:36 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/20 21:41:46 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* devuelve el último elemento de la lista */

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL && lst->next != NULL) //mientras exista un nodo, y su referencia del siguiente sea distinto de NULL.
		lst = lst->next; //recorro los nodos hasta llegar al último que cumpla con esta condicion. 
	return (lst); //retorno el último nodo. 
}

