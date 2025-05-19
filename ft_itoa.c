/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:51:39 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 18:00:22 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len++;
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	int			sign;
	long int	nbr;

	len = 0;
	nbr = n;
	sign = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		sign = -1;
		len++;
	}
	len += ft_len(nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (--len)
	{
		result[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign < 0)
		result[0] = '-';
	return (result);
}
