/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 10:28:02 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/25 23:00:24 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readfile.h"
#include "resolve_bsq.h"
#include "main_resolve_bsq.h"
#include "display.h"
#include "errors.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	initsquare(t_square *square)
{
	square->size = 0;
	square->x = 0;
	square->y = 0;
}

int		do_resolution(int fd)
{
	char	**board;
	int		**roll;
	t_chars	*stats;

	if (fd < 0)
		return (int_error());
	if (!(stats = readhead(fd)) || stats->linenbr < 1)
		return (int_error());
	initsquare(&stats->square);
	board = readfirstline(fd, &roll, stats);
	if (!board)
		return (int_error());
	if (resolve(fd, board, roll, stats) != stats->linenbr)
		return (int_error());
	place_square(board, stats);
	display_result(board, stats);
	if (fd > 0)
		close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;
	int i;

	i = 1;
	if (argc == 1)
		do_resolution(0);
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			do_resolution(fd);
			if (i < argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
