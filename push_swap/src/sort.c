/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:23:27 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/16 16:15:16 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	greedy_sort(t_list **a, t_list **b)
{
	int		total_actions;
	t_move	*best_move;

	total_actions = 0;
	while (*b)
	{
		best_move = get_best_move(*a, *b);
		if (!best_move)
			break ;
		total_actions += execute_move(a, b, best_move);
		free(best_move);
	}
	return (total_actions);
}

int	move_to_b(t_list **list_a, t_list **list_b, int limit, int chunk_size)
{
	int	count_in_b;
	int	count_actions;
	int	middle;

	count_actions = 0;
	count_in_b = 0;
	while (ft_list_size(*list_a) > 1)
	{
		middle = limit - chunk_size / 2;
		if ((*list_a)->index <= limit)
		{
			pb(list_a, list_b);
			count_in_b++;
			count_actions++;
			if (*list_b && (*list_b)->index < limit - (middle - chunk_size / 4))
				count_actions += rb(list_b);
		}
		else
			count_actions += ra(list_a);
		if (count_in_b >= limit)
			limit += chunk_size;
	}
	return (count_actions);
}

int	sort(t_list **list_a, t_list **list_b)
{
	int	list_size;
	int	chunk_size;
	int	limit;
	int	count_actions;

	count_actions = 0;
	list_size = ft_list_size(*list_a);
	if (is_sorted(*list_a))
		return (0);
	if (list_size < 6)
		return (tiny_sort(list_a, list_b));
	if (list_size <= 100 && list_size >= 25)
		chunk_size = list_size / 5;
	if (list_size < 25 && list_size >= 6)
		chunk_size = list_size;
	else
		chunk_size = 60;
	limit = chunk_size;
	count_actions += move_to_b(list_a, list_b, limit, chunk_size);
	count_actions += greedy_sort(list_a, list_b);
	count_actions += rotate_to_min(list_a);
	return (count_actions);
}
