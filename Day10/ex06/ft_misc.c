/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_misc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:05:17 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/16 19:32:59 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

long		ft_abs(long i)
{
	if (i < 0)
		return (-i);
	return (i);
}

void		ft_putlong(long i)
{
	if (i < 0)
		ft_putchar('-');
	if (ft_abs(i) < 10)
		ft_putchar('0' + ft_abs(i));
	else
	{
		ft_putlong(ft_abs(i) / 10);
		ft_putchar((ft_abs(i) % 10) + '0');
	}
}

long		ft_atoi(char *str)
{
	long i;
	long neg;
	long number;

	i = 0;
	neg = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
		neg = 1;
	if ((str[i] == 45) || (str[i] == 43))
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((long)str[i] - 48);
		i++;
	}
	if (neg == 1)
		return (-number);
	else
		return (number);
}
