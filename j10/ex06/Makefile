# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnoth <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 15:13:06 by wnoth             #+#    #+#              #
#    Updated: 2017/08/14 16:50:48 by wnoth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = divide.c ft_atoi.c ft_putchar.c ft_putnbr.c less.c main.c modulo.c plus.c times.c
INCLUDES = functions.h
FLAGS = -Werror -Wextra -Wall

all: compile_c

compile_c:
	gcc $(FLAGS) -o $(NAME) $(SRC) -I $(INCLUDES)

clean:
	rm -f $(NAME)
