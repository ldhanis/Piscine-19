/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_colle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvan-duf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 15:07:33 by cvan-duf          #+#    #+#             */
/*   Updated: 2018/07/22 23:03:33 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include "check_colle.h"
#include "display.h"

void	check_colle(char **tab, int height, int width, char result[5][3])
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = 0;
	while (j < 5)
	{
		if (check_equality(tab, height, j))
		{
			result[k][0] = j + '0';
			result[k][1] = width + '0';
			result[k][2] = height + '0';
			k++;
		}
		j++;
	}
	i++;
	ft_display(result, j, k, i);
	if (k == 0)
		ft_putstr("aucune");
}

int		check_equality(char **tab, int height, int j)
{
	int		i;
	char	*param;

	param = get_colle(j);
	i = 0;
	while (i < height)
	{
		if (i == 0 && !check_line(param[0], param[1], param[2], tab[i]))
		{
			return (0);
		}
		else if (i != 0 && (i == height - 1) && !check_line(param[6],
					param[7], param[8], tab[i]))
			return (0);
		else if ((i != 0) && (i != height - 1) && !check_line(param[3],
					param[4], param[5], tab[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*get_colle(int i)
{
	if (i == 0)
		return ("o-o| |o-o");
	else if (i == 1)
		return ("\\*/* */*\\");
	else if (i == 2)
		return ("ABAB BABA");
	else if (i == 3)
		return ("ABCB BABC");
	else
		return ("ABCB BCBA");
}

int		get_string_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_line(char c1, char c2, char c3, char *str)
{
	int		i;
	int		length;

	i = 0;
	length = get_string_size(str);
	while (i < length)
	{
		if (i == 0 && str[i] != c1)
			return (0);
		else if (i != 0 && i == (length - 1) && str[length - 1] != c3)
			return (0);
		else if (i != 0 && i != (length - 1) && str[i] != c2)
			return (0);
		i++;
	}
	return (1);
}
