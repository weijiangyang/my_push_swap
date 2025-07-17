# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weiyang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/04 13:24:39 by weiyang           #+#    #+#              #
#    Updated: 2025/07/12 17:39:59 by weiyang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
FLAG = -Wall -Wextra -Werror
SRC_DIR = src
INCLUDE_DIR = includes

SRC = parse.c sort.c main.c get_best_move.c get_min_low_index_a.c cal_cost_a.c cal_cost_b.c total_moves.c \
	free_stack.c assign_indexes.c total_moves_with_priority.c execute_move.c  tiny_sort.c rotate_to_min.c \
	swap.c rotate.c rrotate.c put.c ft_list_size.c ft_atoi.c swap_min_to_b.c checker_parse.c ft_split.c \
	is_valid_int.c has_duplicate.c is_sorted.c

OBJ = $(SRC:.c=.o)

SRC_PATHS = $(addprefix $(SRC_DIR)/, $(SRC))

OBJ_PATHS = $(addprefix $(SRC_DIR)/, $(OBJ))

all: $(NAME)

$(NAME): $(OBJ_PATHS)
	cc $(FLAG) -I$(INCLUDE_DIR) -o $(NAME) $(OBJ_PATHS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	cc $(FLAG) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ_PATHS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

