# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: weiyang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 14:11:09 by weiyang           #+#    #+#              #
#    Updated: 2025/07/17 14:11:12 by weiyang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = src
EXT_SRC_DIR = ../src
INC_DIR = includes

SRC = checker.c get_next_line.c get_next_line_utils.c ft_strcmp.c
EXT_SRC = \
	../src/cal_cost_a.c \
	../src/cal_cost_b.c \
	../src/checker_parse.c \
	../src/execute_move.c \
	../src/free_stack.c \
	../src/ft_atoi.c \
	../src/ft_list_size.c \
	../src/ft_split.c \
	../src/get_best_move.c \
	../src/get_min_low_index_a.c \
	../src/has_duplicate.c \
	../src/is_valid_int.c \
	../src/parse.c \
	../src/put.c \
	../src/rotate.c \
	../src/rotate_to_min.c \
	../src/rrotate.c \
	../src/sort.c \
	../src/swap.c \
	../src/swap_min_to_b.c \
	../src/tiny_sort.c \
	../src/total_moves.c \
	../src/total_moves_with_priority.c \
	../src/assign_indexes.c \
	../src/is_sorted.c
	
SRC_PATHS = $(addprefix $(SRC_DIR)/, $(SRC))
ALL_SRC = $(SRC_PATHS) $(EXT_SRC)
OBJ = $(ALL_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I$(INC_DIR) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
