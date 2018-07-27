# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srans <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 14:11:22 by srans             #+#    #+#              #
#    Updated: 2018/07/22 22:42:17 by cvan-duf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ./colle-2

SRC = srcs/

HEADER = includes/

CFLAG = -Wall -Wextra -Werror

OPTION = -o $(NAME) -I $(HEADER)

ALL_C = $(SRC)main.c $(SRC)display.c $(SRC)read.c $(SRC)check_colle.c\
		$(SRC)list.c $(SRC)tools.c

all:
	@cc $(CFLAG) $(OPTION) $(ALL_C)

clean:

fclean:
	@rm -f $(NAME)

re: fclean all

