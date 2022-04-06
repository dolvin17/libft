/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:41:34 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:42:39 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* elimina y libera todos los elementos de la lista */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		pos = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = pos;
	}
}
