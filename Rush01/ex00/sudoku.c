/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:20:53 by cmasia            #+#    #+#             */
/*   Updated: 2018/07/14 22:14:51 by cmasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		first_pos_square(int point)
{
	int modulo;
	int decalage;

	modulo = point % 3;
	decalage = point;
	if (modulo == 2)
		decalage -= 2;
	else if (modulo == 1)
		decalage -= 1;
	return (decalage);
}

int		occ_on_line(int number, int grille[9])
{
	int occurrence;
	int i;

	i = 0;
	occurrence = 0;
	while (i < 9)
	{
		if (grille[i] == number)
			occurrence++;
		i++;
	}
	return (occurrence);
}

int		occ_on_column(int number, int grille[9][9], int x)
{
	int occurrence;
	int i;

	i = 0;
	occurrence = 0;
	while (i < 9)
	{
		if (grille[i][x] == number)
			occurrence++;
		i++;
	}
	return (occurrence);
}

int		occ_on_square(int number, int grille[9][9], t_position pos)
{
	t_position	first;
	int			i;
	int			j;
	int			occurrence;

	occurrence = 0;
	first.x = first_pos_square(pos.x);
	first.y = first_pos_square(pos.y);
	i = first.y;
	while (i <= first.y + 2)
	{
		j = first.x;
		while (j <= first.x + 2)
		{
			if (grille[i][j] == number)
				occurrence++;
			j++;
		}
		i++;
	}
	return (occurrence);
}
