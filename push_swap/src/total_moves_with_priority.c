/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_moves_with_priority.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:12:12 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 12:13:56 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	total_moves_with_priority(t_list *a, t_list *b, t_list *target)
{
	int	base_cost;

	base_cost = total_moves(a, b, target);
	return (base_cost - (target->index / 10));
}
