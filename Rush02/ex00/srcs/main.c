/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 14:41:42 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/22 22:43:09 by cvan-duf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include <stdlib.h>
#include "check_colle.h"
#include "tools.h"

int		main(void)
{
	char	**arr;
	char	*pipe_output;
	int		width;
	int		height;
	char	result[5][3];

	height = 0;
	width = 0;
	pipe_output = ft_read_pipe();
	get_arr_dim(pipe_output, &height, &width);
	arr = size_arr(height, width);
	if (!arr || height == 0 || width == 0)
		ft_putstr("aucune");
	else
	{
		clean_array(result);
		fill_arr(arr, pipe_output, height, width);
		check_colle(arr, height, width, result);
	}
	ft_putchar('\n');
	return (0);
}
