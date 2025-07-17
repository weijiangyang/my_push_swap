/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:07:58 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 12:08:00 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	total_moves(t_list *a, t_list *b, t_list *target)
{
	int	cost_a;
	int	cost_b;

	cost_a = cal_cost_a(a, target);
	cost_b = cal_cost_b(b, target);
	if ((cost_a >= 0 && cost_b >= 0) || (cost_a < 0 && cost_b < 0))
	{
		if (abs(cost_a) > abs(cost_b))
			return (abs(cost_a));
		else
			return (abs(cost_b));
	}
	else
		return (abs(cost_a) + abs(cost_b));
}
