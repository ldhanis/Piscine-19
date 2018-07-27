/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uthieffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:36:17 by uthieffr          #+#    #+#             */
/*   Updated: 2018/07/25 16:33:29 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readfile.h"

void	freemychain(t_letchain **chain)
{
	t_letchain *temp;

	temp = *chain;
	*chain = (*chain)->next;
	free(temp);
}

int		ft_atoi(char *str)
{
	int nb;
	int sign;

	sign = 1;
	nb = 0;
	while ((*str == '\n') || *str == '\t' || *str == '\v' ||
			*str == ' ' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += (int)*str - '0';
		str++;
	}
	return (nb * sign);
}
