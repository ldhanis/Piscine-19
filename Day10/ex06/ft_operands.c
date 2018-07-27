/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:48:37 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/16 18:52:21 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_misc.h"

void		ft_divide(long a, long b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putlong(a / b);
}

void		ft_modulo(long a, long b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putlong(a % b);
}

void		ft_add(long a, long b)
{
	ft_putlong(a + b);
}

void		ft_soustract(long a, long b)
{
	ft_putlong(a - b);
}

void		ft_mult(long a, long b)
{
	ft_putlong(a * b);
}
