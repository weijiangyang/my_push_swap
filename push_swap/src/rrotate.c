/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:15:06 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 14:16:19 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rrotate(t_list **list)
{
	t_list	*first;
	t_list	*last;
	t_list	*before_last;

	if (!list || !*list || !(*list)->next)
		return (0);
	first = *list;
	before_last = *list;
	while (before_last->next->next)
		before_last = before_last->next;
	last = before_last->next;
	last->prev = NULL;
	before_last->next = NULL;
	last->next = first;
	first->prev = last;
	*list = last;
	return (1);
}

int	rra(t_list **list)
{
	if (rrotate(list))
	{
		write (1, "rra\n", 4);
		return (1);
	}
	return (0);
}

int	rrb(t_list **list)
{
	if (rrotate(list))
	{
		write(1, "rrb\n", 4);
		return (1);
	}
	return (0);
}

int	rrr(t_list **list_a, t_list **list_b)
{
	if (rrotate(list_a) && rrotate(list_b))
	{
		write(1, "rrr\n", 4);
		return (1);
	}
	return (0);
}
