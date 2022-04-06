/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:35:39 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:43:57 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* toma un elemento y libera la memoria y el elemento */

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
