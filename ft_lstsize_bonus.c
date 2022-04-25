/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:23:58 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/25 11:01:40 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* cuenta los elementos de una lista */

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list != NULL)//meintras lst distinto de null
	{
		list = list->next;
		i++;//recorro la lista hasta llegar a null. 
	}
	return (i);//retorno mi contador. 
}
