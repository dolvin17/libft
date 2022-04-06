/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:52:03 by ghuertas          #+#    #+#             */
/*   Updated: 2022/04/06 01:52:11 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* reserva con malloc y convierte en entero 
un conjunto de chars */

static size_t	ft_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		(n /= 10);
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		nlen;
	char		*nstr;
	long int	nbr;

	nlen = ft_num_len(n);
	nbr = n;
	nstr = (char *)malloc(sizeof(char) * (nlen + 1));
	if (!nstr)
		return (NULL);
	nstr[nlen--] = '\0';
	if (nbr == 0)
		nstr[nlen] = '0';
	if (nbr < 0)
	{
		nstr[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nstr[nlen--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (nstr);
}
