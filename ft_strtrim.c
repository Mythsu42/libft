/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:00:50 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 18:42:03 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	end;
	size_t	start;
	size_t	i;

	end = ft_strlen(s1) - 1;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			i = 0;
			start++;
		}
		if (s1[end] == set[i])
		{
			i = 0;
			end--;
		}
		i++;
	}
	result = malloc(sizeof(char) * (end - start) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}
