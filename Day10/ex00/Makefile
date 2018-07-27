# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 10:52:38 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/17 22:45:29 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
C_PATH = ./srcs/
H_PATH = ./includes/
FLAG = -Wall -Werror -Wextra
SRC_1 = $(C_PATH)ft_putchar.c $(C_PATH)ft_putstr.c $(C_PATH)ft_strcmp.c
SRC = $(SRC_1) $(C_PATH)ft_strlen.c $(C_PATH)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all :
	gcc -c $(FLAG) $(SRC) -I$(H_PATH)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
