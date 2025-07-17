/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_cost_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:48:43 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 11:48:46 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	cal_cost_a(t_list *a, t_list *target)
{
	int		pos;
	int		min;
	int		size;
	t_list	*tmp;

	size = ft_list_size(a);
	pos = 0;
	min = INT_MAX;
	tmp = a;
	min = get_min_low_index_a(a, target);
	while (tmp)
	{
		if (tmp->index == min)
			break ;
		pos++;
		tmp = tmp->next;
	}
	if (pos <= size / 2)
		return (pos);
	else
		return (pos - size);
}
