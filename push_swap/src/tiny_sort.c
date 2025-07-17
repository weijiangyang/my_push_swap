/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weijiangyang <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:07:31 by weijiangyang      #+#    #+#             */
/*   Updated: 2025/07/16 16:14:29 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	tiny_sort_three(t_list **a)
{
	int	count_actions;

	count_actions = 0;
	if ((*a)->index > (*a)->next->index
		&& (*a)->index > (*a)->next->next->index)
	{
		count_actions += ra(a);
		if (!is_sorted(*a))
			count_actions += sa(a);
	}
	if ((*a)->next->index > (*a)->index
		&& (*a)->next->index > (*a)->next->next->index)
	{
		count_actions += rra(a);
		if (!is_sorted(*a))
			count_actions += sa(a);
	}
	if ((*a)->index > (*a)->next->index)
		count_actions += (sa(a));
	return (count_actions);
}

int	tiny_sort_four(t_list **a, t_list **b)
{
	int	count_actions;

	count_actions = 0;
	count_actions += swap_min_to_b(a, b, 4);
	count_actions += tiny_sort_three(a);
	count_actions += pa(a, b);
	return (count_actions);
}

int	tiny_sort_five(t_list **a, t_list **b)
{
	int	count_actions;

	count_actions = 0;
	count_actions += swap_min_to_b(a, b, 5);
	count_actions += tiny_sort_four(a, b);
	count_actions += pa(a, b);
	return (count_actions);
}

int	tiny_sort(t_list **a, t_list **b)
{
	int	count_actions;

	count_actions = 0;
	if (ft_list_size(*a) == 2)
	{
		if ((*a)->index > (*a)->next->index)
			count_actions += (sa(a));
	}
	else if (ft_list_size(*a) == 3)
		count_actions += tiny_sort_three(a);
	else if (ft_list_size(*a) == 4)
		count_actions += tiny_sort_four(a, b);
	else if (ft_list_size(*a) == 5)
		count_actions += tiny_sort_five(a, b);
	return (count_actions);
}
