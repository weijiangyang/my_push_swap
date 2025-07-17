/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_low_index_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:42:28 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 11:44:21 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min_low_index_a(t_list *lst, t_list *target)
{
	int		min;
	t_list	*tmp;

	tmp = lst;
	min = INT_MAX;
	while (tmp)
	{
		if (tmp->index > target->index && tmp->index < min)
			min = tmp->index;
		tmp = tmp->next;
	}
	if (min == INT_MAX)
	{
		tmp = lst;
		min = tmp->index;
		while (tmp)
		{
			if (tmp->index < min)
				min = tmp->index;
			tmp = tmp->next;
		}
	}
	return (min);
}
