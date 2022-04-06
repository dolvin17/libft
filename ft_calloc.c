/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:38:19 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:13:19 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* asigna memoria dinámica y la inicializa y rellena con 0 */

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = malloc(count * size);
	if (p != NULL)
	{
		i = 0;
		while (i < count * size)
			*(p + i++) = '\0';
	}
	return (p);
}

// int	main(void)
// {
// 	size_t count = 0;
// 	size_t size = sizeof(int);
// 	void *mine = ft_calloc(count, size);
// 	void *original = calloc(count, size);
// 	printf("Original: %s\n", original);
// 	printf("Mine: %s\n", mine);
// 	free(mine);
// 	free(original);
// 	system("leaks a.out");
// 	return (0);
// }