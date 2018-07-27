/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_resolve_bsq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:26:55 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/25 16:23:13 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "resolve_bsq.h"
#include "readfile.h"
#include "main_resolve_bsq.h"
#include "errors.h"

void		set_var(int *x, int *y, int a, int b)
{
	*x = a;
	*y = b;
}

void		set_var_bis(char *c, int *i, char a, int b)
{
	*c = a;
	*i = b;
}

void		place_square(char **board, t_chars *fdat)
{
	int		x;
	int		y;
	int		x_end;
	int		y_end;
	char	full;

	y_end = fdat->square.y;
	y = y_end - fdat->square.size + 1;
	x_end = fdat->square.x;
	full = fdat->full;
	while (y <= y_end)
	{
		x = x_end - fdat->square.size + 1;
		while (x <= x_end)
			board[y][x++] = full;
		y++;
	}
}

int			resolve(int fd, char **board, int **roll, t_chars *fdat)
{
	char		buff;
	int			x;
	int			y;
	int			tmp;

	set_var(&x, &y, 0, 1);
	while (read(fd, &buff, 1))
	{
		if (x == fdat->colnbr && buff == '\n' && y < fdat->linenbr)
			set_var(&x, &y, -1, y + 1);
		else if (buff == fdat->wall && y < fdat->linenbr)
			set_var_bis(&board[y][x], &roll[y % 2][x + 1], buff, 0);
		else if (buff == fdat->null && y < fdat->linenbr)
		{
			tmp = 1 + min_three(roll[(y + 1) % 2][x],
					roll[(y + 1) % 2][x + 1], roll[y % 2][x]);
			set_var_bis(&board[y][x], &roll[y % 2][x + 1], buff, tmp);
			biggest_square(&fdat->square, x, y, tmp);
		}
		else
			return (-1);
		x++;
	}
	return (y);
}
