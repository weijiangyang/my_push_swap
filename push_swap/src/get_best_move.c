/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_best_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:15:09 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 11:32:45 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_move	*get_move(t_list *a, t_list *b, t_list *tmp, t_move *best)
{
	best->cost_a = cal_cost_a(a, tmp);
	best->cost_b = cal_cost_b(b, tmp);
	best->total = total_moves(a, b, tmp);
	best->target_b = tmp;
	if (best->cost_a >= 0)
		best->direction_a = 1;
	else
		best->direction_a = -1;
	if (best->cost_b >= 0)
		best->direction_b = 1;
	else
		best->direction_b = -1;
	return (best);
}

t_move	*get_best_move(t_list *a, t_list *b)
{
	int		min_score;
	t_list	*tmp;
	t_move	*best;
	int		score;

	min_score = INT_MAX;
	tmp = b;
	best = malloc(sizeof(t_move));
	if (!best)
		return (NULL);
	while (tmp)
	{
		score = total_moves_with_priority(a, b, tmp);
		if (score < min_score)
		{
			min_score = score;
			best = get_move(a, b, tmp, best);
		}
		tmp = tmp->next;
	}
	return (best);
}
