/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 19:37:04 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/15 18:32:59 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

int		ft_get_nb_zero(int grille[9][9])
{
	int len;
	int i;
	int j;

	i = 0;
	len = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (grille[i][j] == 0)
			{
				len++;
			}
			j++;
		}
		i++;
	}
	return (len);
}

int		ft_valid_char(char c)
{
	if ((c > '0' && c <= '9') || c == '.')
	{
		if (c == '.')
			return (0);
		else
			return (c - '0');
	}
	else
		return (-1);
}

int		ft_get_len(char *arg)
{
	int i;

	i = 0;
	while (arg[i])
		i++;
	return (i);
}

int		ft_get_line(char *arg, int line[9])
{
	int elem;
	int j;

	j = 0;
	while (j < 9)
	{
		elem = ft_valid_char(arg[j]);
		if (elem == -1)
			return (0);
		line[j] = elem;
		j++;
	}
	return (1);
}

int		ft_get_array(int argc, char **argv, int array[9][9])
{
	int i;

	i = 0;
	if (argc != 10)
		return (0);
	while (i < 9)
	{
		if (ft_get_len(argv[i + 1]) != 9)
			return (0);
		if (ft_get_line(argv[i + 1], array[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
