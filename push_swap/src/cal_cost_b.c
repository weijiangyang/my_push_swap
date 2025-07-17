/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal_cost_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:51:25 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/14 11:52:23 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	cal_cost_b(t_list *b, t_list *target)
{
	int		pos;
	int		size;
	t_list	*tmp;

	if (!target)
		return (0);
	size = ft_list_size(b);
	pos = 0;
	tmp = b;
	while (tmp && tmp->index != target->index)
	{
		tmp = tmp->next;
		pos++;
	}
	if (!tmp)
		return (0);
	if (pos <= size / 2)
		return (pos);
	else
		return (pos - size);
}
