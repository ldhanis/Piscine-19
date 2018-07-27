/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:47:07 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/11 20:47:41 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_count_tot_chars(int argc, char **argv)
{
	int i;
	int chars;

	chars = 0;
	i = 1;
	while (i < argc)
	{
		chars += sizeof(argv + i);
		i++;
	}
	return (chars);
}

char			*ft_concat_params(int argc, char **argv)
{
	int		tot_size;
	char	*ret_string;
	int		i;
	int		j;
	int		a;

	tot_size = ft_count_tot_chars(argc, argv) + argc;
	ret_string = (char*)malloc(sizeof(char) * tot_size);
	i = 1;
	a = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ret_string[a++] = argv[i][j++];
		}
		if (i++ == argc - 1)
			ret_string[a++] = '\0';
		else
			ret_string[a++] = '\n';
	}
	return (ret_string);
}
