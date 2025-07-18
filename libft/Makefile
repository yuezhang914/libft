# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzhang2 <yzhang2@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 03:02:56 by yzhang2           #+#    #+#              #
#    Updated: 2025/07/19 01:37:04 by yzhang2          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        := libft.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror -I. -Iget_next_line
AR          := ar -rcs

SRC         := $(filter-out %_bonus.c, $(wildcard *.c))
GNL_DIR     := get_next_line
GNL_SRC     := $(filter-out %_bonus.c, $(wildcard $(GNL_DIR)/*.c))
BONUS_SRC   := $(wildcard *_bonus.c) \
               $(wildcard $(GNL_DIR)/*_bonus.c)

OBJ         := $(SRC:.c=.o) $(GNL_SRC:%.c=%.o)
BONUS_OBJ   := $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus: $(BONUS_OBJ)
	$(AR) $(NAME) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re