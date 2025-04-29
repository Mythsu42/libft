/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:39:59 by ktolba            #+#    #+#             */
/*   Updated: 2025/04/30 00:08:19 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s);
	cpy = malloc(sizeof(char) * ++len);
	if (!cpy)
		return (NULL);
	cpy[len] = '\0';
	while (len-- >= 0)
		cpy[len] = s[len--];
	return (cpy);
}
