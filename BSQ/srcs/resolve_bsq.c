/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 11:25:17 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/25 11:12:54 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "resolve_bsq.h"

void		new_line(int *line, int *coll)
{
	*line += 1;
	*coll = 0;
}

int			min_three(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void		biggest_square(t_square *biggest, int x, int y, int size)
{
	if (size > biggest->size)
	{
		biggest->size = size;
		biggest->x = x;
		biggest->y = y;
	}
}
