# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uthieffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 11:54:29 by uthieffr          #+#    #+#              #
#    Updated: 2018/07/25 16:52:43 by uthieffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = display main_resolve_bsq misc_str readfile resolve_bsq errors main
CFILE = $(addsuffix .c, $(SRCS))
HDIR = includes/
CDIR = srcs/
ODIR = obj/
OBJ = $(CFILE:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wextra -Werror -Wall $(addprefix $(CDIR),$(CFILE)) -I$(HDIR)
	mv $(OBJ) $(ODIR)
	gcc $(addprefix $(ODIR),$(OBJ)) -o $(NAME)

clean:
	rm -f $(addprefix $(ODIR),$(OBJ))

fclean: clean
	rm $(NAME)

re: fclean all
