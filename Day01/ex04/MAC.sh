# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 14:20:43 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/03 14:21:04 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig -a | grep -w ether | cut -c 8- | sed "s/ //g"
