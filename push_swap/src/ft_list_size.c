/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:59:17 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 14:21:44 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_list_size(t_list *list)
{
	int	len;

	len = 0;
	while (list)
	{
		len++;
		list = list -> next;
	}
	return (len);
}
