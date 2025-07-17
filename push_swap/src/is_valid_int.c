/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:01:11 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/17 11:01:15 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_valid_int(char *str)
{
	long	result;

	if (checker_parse(str) == 0)
		return (0);
	result = ft_atoi(str);
	if (result > INT_MAX || result < INT_MIN)
		return (0);
	else
		return (1);
}
