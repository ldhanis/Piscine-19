# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    bon.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 14:31:49 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/03 14:38:25 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
 
ldapsearch -Q -LLL sn | grep "sn:" | grep "Bon" | wc -l | bc