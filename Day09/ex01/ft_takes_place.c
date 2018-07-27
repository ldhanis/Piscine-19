/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:23:10 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/12 19:28:10 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_show_msg(int h1, int h2, char *s1, char *s2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s\n",
			h1, s1, h2, s2);
}

void		ft_fait_chier_lheure(int *h1, int *h2)
{
	*h1 = *h1 % 12;
	*h2 = *h2 % 12;
	if (*h1 == 0)
		*h1 = 12;
	if (*h2 == 0)
		*h2 = 12;
}

void		ft_takes_place(int hour)
{
	char	*ampm1;
	char	*ampm2;
	int		hour2;

	if (hour % 24 < 12)
		ampm1 = "A.M.";
	else
		ampm1 = "P.M.";
	hour2 = hour + 1;
	if (hour2 % 24 < 12)
		ampm2 = "A.M.";
	else
		ampm2 = "P.M.";
	ft_fait_chier_lheure(&hour, &hour2);
	ft_show_msg(hour, hour2, ampm1, ampm2);
}
