# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 10:15:05 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/18 13:59:08 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
FLAG = -Wall -Werror -Wextra
SRC = *.c

all :
	gcc $(FLAG) -o $(NAME) $(SRC)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
