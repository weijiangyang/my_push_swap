/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:56:14 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/07/14 22:39:55 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotation_common(t_list **a, t_list **b, t_move *move)
{
	int	common_rotations;
	int	i;
	int	count_actions;

	count_actions = 0;
	i = 0;
	if (abs(move->cost_a) < abs(move->cost_b))
		common_rotations = abs(move->cost_a);
	else
		common_rotations = abs(move->cost_b);
	while (i < common_rotations)
	{
		if (move->direction_a == 1)
			count_actions += rr(a, b);
		else
			count_actions += rrr(a, b);
		i++;
	}
	return (count_actions);
}

int	rotation_rest_a(int common_rotations, t_list **a, t_move *move)
{
	int	i;
	int	count_actions;

	i = common_rotations;
	count_actions = 0;
	while (i < abs(move->cost_a))
	{
		if (move->direction_a == 1)
			count_actions += ra(a);
		else
			count_actions += rra(a);
		i++;
	}
	return (count_actions);
}

int	rotation_rest_b(int common_rotations, t_list **b, t_move *move)
{
	int	i;
	int	count_actions;

	i = common_rotations;
	count_actions = 0;
	while (i < abs(move->cost_b))
	{
		if (move->direction_b == 1)
			count_actions += rb(b);
		else
			count_actions += rrb(b);
		i++;
	}
	return (count_actions);
}

int	rotation_separ(t_list **a, t_list **b, t_move *move)
{
	int	i;
	int	count_actions;

	i = 0;
	count_actions = 0;
	while (i < abs(move->cost_a))
	{
		if (move->direction_a == 1)
			count_actions += ra(a);
		else
			count_actions += rra(a);
		i++;
	}
	i = 0;
	while (i < abs(move->cost_b))
	{
		if (move->direction_b == 1)
			count_actions += rb(b);
		else
			count_actions += rrb(b);
		i++;
	}
	return (count_actions);
}

int	execute_move(t_list **a, t_list **b, t_move *move)
{
	int	count_actions;
	int	common_rotations;

	count_actions = 0;
	if (move->direction_a == move->direction_b)
	{
		if (abs(move->cost_a) < abs(move->cost_b))
			common_rotations = abs(move->cost_a);
		else
			common_rotations = abs(move->cost_b);
		count_actions += rotation_common(a, b, move);
		count_actions += rotation_rest_a(common_rotations, a, move);
		count_actions += rotation_rest_b(common_rotations, b, move);
	}
	else
		count_actions += rotation_separ(a, b, move);
	count_actions += pa(a, b);
	return (count_actions);
}
