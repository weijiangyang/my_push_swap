/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_to_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:16:54 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 14:40:00 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min_position(t_list *list_a)
{
	int		pos;
	int		min;
	int		min_pos;
	t_list	*tmp;

	pos = 0;
	min = INT_MAX;
	min_pos = 0;
	tmp = list_a;
	while (tmp)
	{
		if (tmp->index < min)
		{
			min = tmp->index;
			min_pos = pos;
		}
		tmp = tmp->next;
		pos++;
	}
	return (min_pos);
}

int	rotate_to_min(t_list **a)
{
	int	pos;
	int	size;
	int	count;
	int	rot;

	pos = get_min_position(*a);
	size = ft_list_size(*a);
	count = 0;
	if (pos <= size / 2)
		while (pos-- > 0)
			count += ra(a);
	else
	{
		rot = size - pos;
		while (rot-- > 0)
			count += rra(a);
	}
	return (count);
}
