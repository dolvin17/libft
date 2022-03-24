/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 11:50:18 by ghuertas          #+#    #+#             */
/*   Updated: 2022/03/24 19:31:42 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*aux;

	i = 0;
	while (n--)
	{
		aux = ((unsigned char *)src);
		((unsigned char *)dest)[i] = aux[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest1[] = "Testoing";
	char	dest2[] = "Testoing";
	char	src1[] = "Mango";
	char	src2[] = "Mango";
	size_t	n = 5;
	printf("Original: :%s:\n", memmove(dest1, src1, n));
	printf("Mine: :%s:\n", ft_memmove(dest2, src2, n));
	return (0);
}*/
