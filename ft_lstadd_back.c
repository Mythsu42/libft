/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktolba <tolbakevin@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:15:13 by ktolba            #+#    #+#             */
/*   Updated: 2025/05/19 19:20:30 by ktolba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return;

	if (!*lst)
	{
		*lst = new;
		return;
	}

	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}
