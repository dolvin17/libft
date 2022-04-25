/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:36:44 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/21 00:13:12 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/* reserva con malloc y devuelve un elemento nuevo */

t_list	*ft_lstnew(void *content)

{
	t_list	*node;

	node = malloc(sizeof(t_list));// reservo la memoria para el nuevo nodo.
	if (!node)//si falla la reserva
		return (NULL);
	node->content = content; // sino en el elemento al que apunto con node, se va a guardar el contenido del nuevo nodo que intento crear.
	node->next = NULL; //lo que apunte despues, será la referencia al final (NULL)
	return (node);//devuelvo el nodo creado. 
}
/*
int	main(void)
{
	t_list	*cat;

	cat = ft_lstnew("I love cats");
	printf("%p", cat->content);
}*/
