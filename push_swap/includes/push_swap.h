/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 12:09:34 by weiyang           #+#    #+#             */
/*   Updated: 2025/07/15 14:38:23 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

typedef struct s_move
{
	int			cost_a;
	int			cost_b;
	int			total;
	int			direction_a;
	int			direction_b;
	t_list		*target_b;
}	t_move;

int		swap(t_list **list);
int		sa(t_list **list);
int		sb(t_list **list);
int		ss(t_list **list_a, t_list **list_b);
int		p(t_list **list_a, t_list **list_b);
int		pa(t_list **list_a, t_list **list_b);
int		pb(t_list **list_b, t_list **list_a);
int		rotate(t_list **list);
int		ra(t_list **list);
int		rb(t_list **list);
int		rr(t_list **list_a, t_list **list_b);
int		rrotate(t_list **list);
int		rra(t_list **list);
int		rrb(t_list **list);
int		rrr(t_list **list_a, t_list **list_b);
int		sort(t_list **list_a, t_list **list_b);
t_list	*new_node(int value);
long	ft_atoi(char *s);
int		is_valid_int(char *str);
int		has_duplicate(t_list *list);
int		ft_list_size(t_list *list);
void	assign_indexes(t_list *lst);
t_list	*parse_list(int argc, char **argv);
int		get_max_index(t_list *list);
void	free_stack(t_list **stack);
int		cal_cost_a(t_list *a, t_list *target);
int		cal_cost_b(t_list *b, t_list *target);
t_move	*get_best_move(t_list *a, t_list *b);
int		tiny_sort(t_list **a, t_list **b);
int		is_sorted(t_list *stack);
int		get_min_low_index_a(t_list *lst, t_list *target);
int		total_moves(t_list *a, t_list *b, t_list *target);
int		total_moves_with_priority(t_list *a, t_list *b, t_list *target);
int		execute_move(t_list **a, t_list **b, t_move *move);
int		rotate_to_min(t_list **a);
long	ft_atoi(char *s);
int		swap_min_to_b(t_list **a, t_list **b, int size);
int		checker_parse(char *str);
char	**ft_split(char const *s, char c);
int		is_valid_int(char *str);
int		has_duplicate(t_list *list);
int		is_sorted(t_list *stack);

#endif
