/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:36:24 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 10:53:46 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/* itera lst y aplica 'f' a cada elemento
si la aplicación es correcta, se genera una nueva lista */

t_list	*ft_lstmap(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodel;
	t_list	*ptr;
	void	*content;

	if (!node)//nodo no existe
		return (NULL);//retorno null.
	content = f(node->content);//content almacenará el contenido del nodo modificado de f. 
	new_nodel = ft_lstnew(content);//new_nodel almacenará el nuevo nodo. 
	if (!new_nodel)//si la creación y reserva de memoria falla
		return (del(content), NULL);//aplico del a content y retorno null. 
	ptr = new_nodel;
	node = node->next;//en mi nodo actual almaceno la ref del sigueinte. 
	while (node != NULL)//mientas no llegue a null. 
	{
		content = f(node->content);//aplico f a cada nodo.
		new_nodel->next = ft_lstnew(content);//creo un nuevo nodo con el contenido de f, reservando memoria.
		if (!new_nodel->next)//si llego al null
			return (ft_lstclear(&ptr, del), NULL);//elimino la ref actual del puntero, libero y retorno null.
		new_nodel = new_nodel->next;//sino, apunto a la referencia del siguiente y sigo hasta llegar a null. 
		node = node->next;//nodo anterior = referencia del siguiente. 
	}
	return (ptr);
}
/*
	void (f)(void *);
	void (del)(void *);

int	main(void)
{

	t_list *gato;

	gato = ft_lstnew("soy karol g\n");
	printf("contenido inicial: %p\n", gato->content);
	gato = ft_lstmap(gato, *f, *del);
	printf("contenido nuevo, %p\n", gato->content);
	return (0);	
}*/

