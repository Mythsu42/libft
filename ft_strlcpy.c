/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:40:43 by ktolba            #+#    #+#             */
/*   Updated: 2025/04/30 00:10:38 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((char *)src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while ((char *)src[j] && j < dstsize - 1)
		dst[j] = src[j++];
	dst[j] = '\0';
	return (i);
}
