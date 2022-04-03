/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:36:24 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/03 23:49:40 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodel;
	t_list	*ptr;

	if (!node)
		return (NULL);
	new_nodel = ft_lstnew(f(node->content));
	if (!new_nodel)
		return (NULL);
	ptr = new_nodel;
	node = node->next;
	while (node != NULL)
	{
		new_nodel->next = ft_lstnew(f(node->content));
		if (!new_nodel->next)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		new_nodel = new_nodel->next;
		node = node->next;
	}
	new_nodel->next = NULL;
	return (ptr);
}
