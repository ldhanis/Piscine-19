/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:10:57 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 20:11:50 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_misc.h"
#include "ft_operands.h"

int		ft_operand_to_val(char c)
{
	if (c == '/')
		return (0);
	if (c == '%')
		return (1);
	if (c == '+')
		return (2);
	if (c == '-')
		return (3);
	if (c == '*')
		return (4);
	return (-1);
}

int		main(int argc, char **argv)
{
	void	(*operation[5])(long, long);
	int		op;

	operation[0] = &ft_divide;
	operation[1] = &ft_modulo;
	operation[2] = &ft_add;
	operation[3] = &ft_soustract;
	operation[4] = &ft_mult;
	op = ft_operand_to_val(argv[2][0]);
	if (argc != 4)
		return (0);
	if (op != -1 && !argv[2][1])
		operation[op](ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
