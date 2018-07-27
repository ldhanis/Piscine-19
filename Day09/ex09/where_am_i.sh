# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/13 13:22:25 by ldhanis           #+#    #+#              #
#    Updated: 2018/07/13 13:23:06 by ldhanis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
IP=`ifconfig | grep "inet " | cut -d ' ' -f2 | awk '($0 != "127.0.0.1") {print}'`
if [[ IP == "" ]]; then
	echo "Je suis perdu!"
else
	echo "$IP"
fi