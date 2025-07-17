/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:27:06 by weiyang           #+#    #+#             */
/*   Updated: 2025/05/30 12:15:34 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	5

#endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../../includes/push_swap.h"

char	*extract_line(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s);
int		end_line(char *str);
char	*get_next_line(int fd, int final);
int     ft_strcmp(char *s1, char *s2);
int     main(int argc, char **argv);

int	handle_swap_ops(char *op, t_list **list_a, t_list **list_b);
int	handle_push_ops(char *op, t_list **list_a, t_list **list_b);
int	handle_rotate_ops(char *op, t_list **list_a, t_list **list_b);
int handle_rrotate_ops(char *op, t_list **list_a, t_list **list_b);
void	check_op(char *op, t_list **list_a, t_list **list_b);

#endif
