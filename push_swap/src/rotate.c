/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:45:34 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 13:45:38 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotate(t_list **list)
{
	t_list	*first;
	t_list	*last;
	t_list	*second;

	if (!list || !*list || !(*list)->next)
		return (0);
	first = *list;
	second = (*list)->next;
	second -> prev = NULL;
	last = *list;
	while (last->next)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
	*list = second;
	return (1);
}

int	ra(t_list **list)
{
	if (rotate(list))
	{
		write (1, "ra\n", 3);
		return (1);
	}
	return (0);
}

int	rb(t_list **list)
{
	if (rotate(list))
	{
		write (1, "rb\n", 3);
		return (1);
	}
	return (0);
}

int	rr(t_list **list_a, t_list **list_b)
{
	if (rotate(list_a) && rotate(list_b))
	{
		write(1, "rr\n", 3);
		return (1);
	}
	return (0);
}
