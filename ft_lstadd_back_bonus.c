/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:23:09 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/19 18:50:43 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* añade el elemento new al final de la lista */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	pos = ft_lstlast(*lst);//obtengo el ultimo parametro de la lista. 
	if (pos != NULL)//si mi puntero es distinto de null, aun no he llegado al ultimo elemento de la lista. 
		pos->next = new;//el elemento al que apunte mi puntero(que nunca va ser null), es el ultimo elemento de la lista.
	else
		*lst = new;//añado mi elemento como primer y unuco nodo.
}
//**lst puntero al primer nodo de la lista