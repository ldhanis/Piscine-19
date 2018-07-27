/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:29:59 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/14 22:14:31 by cmasia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H
# define TRUE 1
# define FALSE 0

typedef struct	s_position
{
	int			x;
	int			y;
}				t_position;
int				first_pos_square(int point);
int				occ_on_line(int number, int grille[9]);
int				occ_on_column(int number, int grille[9][9], int y);
int				occ_on_square(int number, int grille[9][9], t_position pos);
int				is_board_valid(int grille[9][9]);

#endif
