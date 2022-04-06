/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:36:44 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:36:09 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y devuelve un elemento nuevo */

t_list	*ft_lstnew(void *content)

{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int	main(void)
{
	t_list	*tamal;

	tamal = ft_lstnew("HOLA SOY TAMALITO KAROLITO");
	printf("%s", tamal->content);
}
*/