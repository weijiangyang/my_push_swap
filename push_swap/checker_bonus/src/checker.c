/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:02:23 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/17 20:22:15 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	check_op_bonus(t_list **list_a, t_list **list_b)
{
	char	*op;

	op = get_next_line(0, 0);
	while (op)
	{
		check_op(op, list_a, list_b);
		free(op);
		op = get_next_line(0, 0);
	}
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;

	if (argc < 2)
		return (0);
	list_a = parse_list(argc, argv);
	if (!list_a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	list_b = NULL;
	check_op_bonus(&list_a, &list_b);
	if (is_sorted(list_a) && list_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free_stack(&list_a);
	free_stack(&list_b);
	return (0);
}
