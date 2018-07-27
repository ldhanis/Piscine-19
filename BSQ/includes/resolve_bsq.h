/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_bsq.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:02:43 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/24 17:20:34 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESOLVE_BSQ_H
# define RESOLVE_BSQ_H

typedef	struct		s_square
{
	int x;
	int y;
	int size;
}					t_square;

void				new_line(int *line, int *coll);
int					min_three(int a, int b, int c);
void				biggest_square(t_square *biggest, int x, int y, int size);
#endif
