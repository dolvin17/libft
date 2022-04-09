/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:32:48 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:44:35 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* itera lst y aplica 'f' al contenido de cada elemento */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*pos;

	if (!lst)
		return ;
	pos = lst;
	while (pos != NULL)
	{
		(*f)(pos->content);
		pos = pos->next;
	}
}
