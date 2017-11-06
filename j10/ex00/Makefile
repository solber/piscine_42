# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnoth <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/14 09:30:38 by wnoth             #+#    #+#              #
#    Updated: 2017/08/14 16:55:40 by wnoth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER = includes/*.h
FLAGS = -Wall -Wextra -Werror
all: compile_lib clean

compile_c:
	gcc $(FLAGS) -c $(SRC) -I $(HEADER)

compile_lib: compile_c
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)
clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
