/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:34:02 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/16 16:18:29 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *stack)
{
	if (!stack || !stack->next)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	int		count;

	if (argc < 2)
		return (0);
	list_a = parse_list(argc, argv);
	if (!list_a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (is_sorted(list_a))
	{
		free_stack(&list_a);
		return (0);
	}
	list_b = NULL;
	count = sort(&list_a, &list_b);
	free_stack(&list_a);
	free_stack(&list_b);
	return (0);
}
