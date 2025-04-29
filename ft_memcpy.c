/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:38:23 by ktolba            #+#    #+#             */
/*   Updated: 2025/04/30 00:01:51 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);
{
	while (n > 0)
		((unsigned char *)dest)[--n] = ((unsigned char *)src)[n];
	return ((unsigned char *)dest);
}
