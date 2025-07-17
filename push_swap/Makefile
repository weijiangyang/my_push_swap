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

# Variables
NAME = push_swap
CHECKER = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
CHECKER_DIR = checker_bonus/src
INCLUDE_DIR = includes



# Répertoires
SRC_DIR = src
CHECKER_DIR = checker_bonus/src
INCLUDE_DIR = includes

# Fichiers sources pour push_swap
SRC = parse.c sort.c main.c get_best_move.c get_min_low_index_a.c cal_cost_a.c cal_cost_b.c total_moves.c \
	free_stack.c assign_indexes.c total_moves_with_priority.c execute_move.c tiny_sort.c rotate_to_min.c \
	swap.c rotate.c rrotate.c put.c ft_list_size.c ft_atoi.c checker_parse.c ft_split.c \
	is_valid_int.c has_duplicate.c is_sorted.c swap_min_to_b.c

# Fichiers spécifiques au checker
CHECKER_ONLY_SRC = check_ops.c checker.c ft_strcmp.c get_next_line.c get_next_line_utils.c

# Fichiers partagés avec push_swap mais nécessaires au checker (dans src/)
CHECKER_SHARED_SRC = ft_split.c ft_list_size.c free_stack.c swap.c rotate.c rrotate.c is_sorted.c put.c \
                     checker_parse.c is_valid_int.c ft_atoi.c has_duplicate.c assign_indexes.c parse.c


# Objets
OBJ = $(SRC:%.c=$(SRC_DIR)/%.o)
CHECKER_OBJ = \
	$(addprefix $(CHECKER_DIR)/, $(CHECKER_ONLY_SRC:.c=.o)) \
	$(addprefix $(SRC_DIR)/, $(CHECKER_SHARED_SRC:.c=.o))



all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

$(CHECKER_DIR)/%.o: $(CHECKER_DIR)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

bonus: $(CHECKER)

$(CHECKER): $(CHECKER_OBJ)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -o $@ $^

clean:
	rm -f $(OBJ) $(CHECKER_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(CHECKER)


re: fclean all

.PHONY: all clean fclean re bonus
