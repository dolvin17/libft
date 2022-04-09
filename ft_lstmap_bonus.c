/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:36:24 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/08 20:55:25 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* itera lst y aplica 'f' a cada elemento
si la aplicación es correcta, se genera una nueva lista */

t_list	*ft_lstmap(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodel;
	t_list	*ptr;
	void	*content;

	if (!node)
		return (NULL);
	content = f(node->content);
	new_nodel = ft_lstnew(content);
	if (!new_nodel)
		return (del(content), NULL);
	ptr = new_nodel;
	node = node->next;
	while (node != NULL)
	{
		content = f(node->content);
		new_nodel->next = ft_lstnew(content);
		if (!new_nodel->next)
			return (ft_lstclear(&ptr, del), NULL);
		new_nodel = new_nodel->next;
		node = node->next;
	}
	new_nodel->next = NULL;
	return (ptr);
}
