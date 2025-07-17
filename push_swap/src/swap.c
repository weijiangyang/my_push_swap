/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:14:11 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 14:14:46 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_list **list)
{
	t_list	*first;
	t_list	*second;

	if (!list || !*list || !(*list)->next)
		return (0);
	first = *list;
	second = (*list)->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	second->prev = NULL;
	first->prev = second;
	*list = second;
	return (1);
}

int	sa(t_list **list)
{
	if (swap(list))
		write(1, "sa\n", 3);
	return (1);
}

int	sb(t_list **list)
{
	if (swap(list))
		write(1, "sb\n", 3);
	return (1);
}

int	ss(t_list **list_a, t_list **list_b)
{
	if (swap(list_a) && swap(list_b))
		write(1, "ss\n", 3);
	return (1);
}
