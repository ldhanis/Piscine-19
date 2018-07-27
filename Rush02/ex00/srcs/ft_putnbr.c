/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-duf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 08:25:35 by cvan-duf          #+#    #+#             */
/*   Updated: 2018/07/22 23:12:07 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		ft_count(int nb)
{
	int cpt;

	cpt = 1;
	while (nb > 9)
	{
		nb /= 10;
		cpt++;
	}
	return (cpt);
}

int		exponant(int base, int exp)
{
	int nb;
	int result;

	nb = 0;
	result = 1;
	while (nb < exp)
	{
		result *= base;
		nb++;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int cpt;
	int number_modified;
	int min;

	min = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			min = 1;
			nb++;
		}
		nb = -nb;
	}
	cpt = ft_count(nb);
	while (cpt >= 1)
	{
		number_modified = nb / (exponant(10, cpt - 1));
		nb = nb - number_modified * (exponant(10, cpt - 1));
		if (cpt-- == 1 && min == 1)
			ft_putchar(number_modified + 1 + '0');
		else
			ft_putchar(number_modified + '0');
	}
}
