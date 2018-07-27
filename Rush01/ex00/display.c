/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-azz <aben-azz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:19:18 by aben-azz          #+#    #+#             */
/*   Updated: 2018/07/14 19:31:01 by aben-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *c)
{
	while (*c != '\0')
		ft_putchar(*c++);
	return (0);
}

void	display_sudoku(int grille[9][9])
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		j = 0;
		while (j <= 8)
		{
			ft_putchar(grille[i][j] + '0');
			(j == 8) || ft_putchar(' ');
			(j == 8) && ft_putchar('\n');
			j++;
		}
		i++;
	}
}
