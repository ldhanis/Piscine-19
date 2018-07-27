/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-azz <aben-azz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 02:45:52 by aben-azz          #+#    #+#             */
/*   Updated: 2018/07/15 02:45:54 by aben-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "display.h"

int		next_empty_pos(int grille[9][9], t_position *pos)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grille[i][j] == 0)
			{
				pos->x = j;
				pos->y = i;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		is_position_safe(int grille[9][9], t_position pos, int n)
{
	int count;

	count = 0;
	count = count + occ_on_line(n, grille[pos.y]);
	count = count + occ_on_column(n, grille, pos.x);
	count = count + occ_on_square(n, grille, pos);
	if (count == 0)
		return (1);
	return (0);
}

int		solve_sudoku(int grille[9][9])
{
	t_position	pos;
	int			i;

	if (next_empty_pos(grille, &pos) == 0)
	{
		return (1);
	}
	i = 1;
	while (i <= 9)
	{
		if (is_position_safe(grille, pos, i) == 1)
		{
			grille[pos.y][pos.x] = i;
			if (solve_sudoku(grille) == 1)
			{
				return (1);
			}
			grille[pos.y][pos.x] = 0;
		}
		i++;
	}
	return (0);
}
