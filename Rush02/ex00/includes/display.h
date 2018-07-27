/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-duf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:12:30 by cvan-duf          #+#    #+#             */
/*   Updated: 2018/07/22 21:39:52 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H
# include <stdlib.h>

void	ft_display(char str[5][3], int i, int j, int first);
void	ft_display_elem(char c, int j);
void	ft_display_first(char c, int *first);
void	ft_init_to_zero(int *i, int *j, int *first);

#endif
