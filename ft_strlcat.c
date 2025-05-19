/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:40:27 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 19:01:46 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (dstsize <= i)
	{
		while (src[j])
			j++;
		return (i + j);
	}
	while (src[j] && i < dstsize - 1)
	{
		dst[i++] = src[j++];
	}	
	dst[i] = '\0';
	return (i + j);
}
