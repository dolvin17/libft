/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:23:09 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:41:06 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* añade el elemento new al final de la lista */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	pos = ft_lstlast(*lst);
	if (pos != NULL)
		pos->next = new;
	else
		*lst = new;
}
