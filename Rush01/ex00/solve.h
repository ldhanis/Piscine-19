/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-azz <aben-azz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 02:49:24 by aben-azz          #+#    #+#             */
/*   Updated: 2018/07/15 02:49:24 by aben-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

int		next_empty_pos(int grille[9][9], t_position *pos);
int		is_position_safe(int grille[9][9], t_position pos, int n);
int		solve_sudoku(int grille[9][9]);
#endif
