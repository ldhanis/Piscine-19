/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:33:58 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/13 12:36:38 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*to_min(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((s1[i] == '\n') || (s1[i] == '\t') || (s1[i] == '\v') ||
			(s1[i] == ' ') || (s1[i] == '\f') || (s1[i] == '\r'))
		i++;
	while (s1[i] == s2[j] && s1[i] && s2[j] && j < (len - 1))
	{
		j++;
		i++;
	}
	return (s1[i] - s2[j]);
}

void	main(int argc, char **argv)
{
	int i;

	i = 0;
	while ((++i) < argc)
	{
		argv[i] = to_min(argv[i]);
		if (ft_strcmp(argv[i], "president", 9) == 0)
			write(1, "Alert!!!\n", 10);
		if (ft_strcmp(argv[i], "attack", 6) == 0)
			write(1, "Alert!!!\n", 10);
		if (ft_strcmp(argv[i], "bauer", 5) == 0)
			write(1, "Alert!!!\n", 10);
	}
}
