# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 18:43:24 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/17 20:41:44 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FLAG = -Wall -Werror -Wextra
SRC = ft_misc.c ft_operands.c doop.c
OBJ = ft_misc.o ft_operands.o doop.o

all :
	gcc $(FLAG) $(SRC) -o do-op

clean :

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
