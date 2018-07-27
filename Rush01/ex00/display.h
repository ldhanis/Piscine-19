/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:31:37 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/14 21:09:20 by aben-azz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H
# include <unistd.h>

int		ft_putchar(char c);
void	display_sudoku(int sdk[9][9]);
int		ft_putstr(char *c);
#endif
