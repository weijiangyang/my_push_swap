/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indexes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:45:56 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 13:51:38 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	assign_indexes(t_list *lst)
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		rank;

	tmp1 = lst;
	if (!lst)
		return ;
	while (tmp1)
	{
		rank = 0;
		tmp2 = lst;
		while (tmp2)
		{
			if (tmp1->value > tmp2->value)
				rank++;
			tmp2 = tmp2->next;
		}
		tmp1->index = rank;
		tmp1 = tmp1->next;
	}
}
