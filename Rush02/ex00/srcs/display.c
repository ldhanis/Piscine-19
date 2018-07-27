/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-duf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:12:31 by cvan-duf          #+#    #+#             */
/*   Updated: 2018/07/22 23:10:26 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"
#include "display.h"
#include "tools.h"

void	ft_display_elem(char c, int j)
{
	if (j % 3 == 0)
		ft_putstr(" [colle-0");
	else
		ft_putstr(" [");
	ft_putnbr(c - 48);
	ft_putstr("]");
}

void	ft_init_to_zero(int *i, int *j, int *first)
{
	*i = 0;
	*j = 0;
	*first = 0;
}

void	ft_display_first(char c, int *first)
{
	*first = 1;
	ft_putstr("[colle-0");
	ft_putchar(c);
	ft_putstr("]");
}

void	ft_display(char str[5][3], int i, int j, int first)
{
	ft_init_to_zero(&i, &j, &first);
	while (i < 5)
	{
		if (j == 3 && str[i][0] && first == 1)
			ft_putstr(" ||");
		j = 0;
		while (j < 3)
		{
			if (str[i][j])
			{
				if (!first)
				{
					ft_display_first(str[i][j], &first);
				}
				else
					ft_display_elem(str[i][j], j);
				j++;
			}
			else
				j++;
		}
		i++;
	}
}
