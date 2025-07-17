/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_min_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:15:46 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/16 16:18:00 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_pos_min(t_list **s)
{
	int		pos;
	int		min;
	t_list	*tmp;

	pos = 0;
	min = INT_MAX;
	tmp = *s;
	while (tmp)
	{
		if (tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	tmp = *s;
	while (tmp)
	{
		if (tmp->index == min)
			break ;
		tmp = tmp->next;
		pos++;
	}
	return (pos);
}

int	swap_min_to_b(t_list **a, t_list **b, int size)
{
	int	pos;
	int	i;
	int	count_actions;

	count_actions = 0;
	pos = get_pos_min(a);
	if (pos <= size / 2)
	{
		i = 0;
		while (i++ < pos)
			count_actions += ra(a);
	}
	else
	{
		i = 0;
		while (i++ < size - pos)
			count_actions += rra(a);
	}
	count_actions += pb(a, b);
	return (count_actions);
}
