/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:03:02 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/04 00:15:16 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n-- > 0)
	{
		*ptr++ = c;
	}
	return (s);
}
/*
int	main(void)
{
	char	buffer1[] = "This is a test";
	char	buffer2[] = "This is a test";

	printf("Original:\n");
	printf("Before: %s\n",buffer1);
	memset(buffer1, '*', 4);
	printf("After: %s\n", buffer1);

	printf("Mine: \n");
	printf("Before: %s\n", buffer2);
	ft_memset(buffer2, '*', 4);
	printf("After: %s\n", buffer2);
	return (0);
}*/
