/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_duplicate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:00:40 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/17 11:00:45 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	has_duplicate(t_list *list)
{
	int		tmp;
	t_list	*cpy;

	while (list)
	{
		cpy = list->next;
		tmp = list->value;
		while (cpy)
		{
			if (cpy->value == tmp)
				return (1);
			cpy = cpy->next;
		}
		list = list->next;
	}
	return (0);
}
