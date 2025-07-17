/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:39:20 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/07/14 21:55:50 by weijiangyang     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	p(t_list **list_a, t_list **list_b)
{
	t_list	*list_b_first;

	if (!list_b || !*list_b)
		return (0);
	list_b_first = *list_b;
	*list_b = list_b_first->next;
	if (*list_b)
		(*list_b)->prev = NULL;
	list_b_first->next = *list_a;
	if (*list_a)
		(*list_a)->prev = list_b_first;
	list_b_first->prev = NULL;
	*list_a = list_b_first;
	return (1);
}

int	pa(t_list **list_a, t_list **list_b)
{
	if (p(list_a, list_b))
	{
		write(1, "pa\n", 3);
		return (1);
	}
	return (0);
}

int	pb(t_list **list_a, t_list **list_b)
{
	if (p(list_b, list_a))
	{
		write(1, "pb\n", 3);
		return (1);
	}
	return (0);
}
