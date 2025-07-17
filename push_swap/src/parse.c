/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:14:11 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/17 10:46:41 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*new_node(int value)
{
	t_list	*new_node;

	new_node = malloc (sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

t_list	*parse_tab(char *str, t_list *list, t_list *last)
{
	char	**tab;
	int		i;
	t_list	*new;

	i = 0;
	tab = ft_split(str, ' ');
	while (tab[i])
	{
		if (!is_valid_int(tab[i]))
			return (NULL);
		new = new_node(ft_atoi(tab[i]));
		if (!new)
			return (NULL);
		if (!list)
			list = new;
		else
		{
			last->next = new;
			new->prev = last;
		}
		last = new;
		i++;
	}
	free_tab(tab);
	return (list);
}

t_list	*parse_list_1(int argc, char **argv, t_list *list, t_list *last)
{
	int		i;
	t_list	*new;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]))
			return (NULL);
		new = new_node(ft_atoi(argv[i]));
		if (!new)
			return (NULL);
		if (!list)
			list = new;
		else
		{
			last->next = new;
			new->prev = last;
		}
		last = new;
		i++;
	}
	return (list);
}

t_list	*parse_list(int argc, char **argv)
{
	t_list	*list;
	t_list	*last;

	list = NULL;
	last = NULL;
	if (argc > 2)
		list = parse_list_1(argc, argv, list, last);
	if (argc == 2)
		list = parse_tab (argv[1], list, last);
	if (has_duplicate(list))
	{
		free_stack(&list);
		return (NULL);
	}
	assign_indexes(list);
	return (list);
}
