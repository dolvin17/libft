/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:43:01 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 02:53:08 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reemplaza n bytes de s por ceros 
mejor usar memset */

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = '\0';
}
/*
int	main(void)
{
    char buffer1[] = "This is a test";
    char buffer2[] = "This is a test";

    printf("Before Original: %s\n", buffer1);
	bzero(buffer1, '\0');
    printf("After Original: %s\n", buffer1);
    printf("Before Mine: %s\n", buffer2);
    ft_bzero(buffer2, '\0');
    printf("After Mine: %s\n", buffer2);
    return (0);
}*/
