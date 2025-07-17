/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:04:50 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/17 19:08:49 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	handle_swap_ops(char *op, t_list **list_a, t_list **list_b)
{
	if (!ft_strcmp(op, "sa\n"))
	{
		swap(list_a);
		return (1);
	}
	else if (!ft_strcmp(op, "sb\n"))
	{
		swap(list_b);
		return (1);
	}
	else if (!ft_strcmp(op, "ss\n"))
	{
		swap(list_a);
		swap(list_b);
		return (1);
	}
	return (0);
}

int	handle_push_ops(char *op, t_list **list_a, t_list **list_b)
{
	if (!ft_strcmp(op, "pa\n"))
	{
		p(list_a, list_b);
		return (1);
	}
	else if (!ft_strcmp(op, "pb\n"))
	{
		p(list_b, list_a);
		return (1);
	}
	return (0);
}

int	handle_rotate_ops(char *op, t_list **list_a, t_list **list_b)
{
	if (!ft_strcmp(op, "ra\n"))
	{
		rotate(list_a);
		return (1);
	}
	else if (!ft_strcmp(op, "rb\n"))
	{
		rotate(list_b);
		return (1);
	}
	else if (!ft_strcmp(op, "rr\n"))
	{
		rotate(list_a);
		rotate(list_b);
		return (1);
	}
	return (0);
}

int	handle_rrotate_ops(char *op, t_list **list_a, t_list **list_b)
{
	if (!ft_strcmp(op, "rra\n"))
	{
		rrotate(list_a);
		return (1);
	}
	else if (!ft_strcmp(op, "rrb\n"))
	{
		rrotate(list_b);
		return (1);
	}
	else if (!ft_strcmp(op, "rrr\n"))
	{
		rrotate(list_a);
		rrotate(list_b);
		return (1);
	}
	return (0);
}

void	check_op(char *op, t_list **list_a, t_list **list_b)
{
	if (handle_swap_ops(op, list_a, list_b))
		return ;
	if (handle_push_ops(op, list_a, list_b))
		return ;
	if (handle_rotate_ops(op, list_a, list_b))
		return ;
	if (handle_rrotate_ops(op, list_a, list_b))
		return ;
	free(op);
	write(2, "Error\n", 6);
	exit(1);
}
