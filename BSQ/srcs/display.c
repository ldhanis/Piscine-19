/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:07:42 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/25 13:55:58 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main_resolve_bsq.h"
#include <unistd.h>

void		display_result(char **board, t_chars *fdat)
{
	int i;

	i = 0;
	while (i < fdat->linenbr)
	{
		write(1, board[i], fdat->colnbr);
		write(1, "\n", 1);
		i++;
	}
}
