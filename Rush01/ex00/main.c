/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-azz <aben-azz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:45:14 by aben-azz          #+#    #+#             */
/*   Updated: 2018/07/14 21:47:26 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "check.h"
#include "display.h"
#include "solve.h"

int		main(int argc, char **argv)
{
	int grille[9][9];

	if (ft_get_array(argc, argv, grille))
	{
		if (ft_get_nb_zero(grille) <= 64 && solve_sudoku(grille) == 1)
			display_sudoku(grille);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
