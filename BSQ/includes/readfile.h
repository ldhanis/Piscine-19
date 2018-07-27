/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc_readfile.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uthieffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:05:26 by uthieffr          #+#    #+#             */
/*   Updated: 2018/07/25 16:33:00 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READFILE_H
# define READFILE_H
# include <stdlib.h>
# include <unistd.h>
# include "resolve_bsq.h"

typedef	struct s_letchain	t_letchain;
struct	s_letchain {
	char		c;
	t_letchain	*next;
};

typedef	struct s_chars	t_chars;
struct	s_chars {
	char		null;
	char		wall;
	char		full;
	int			linenbr;
	int			colnbr;
	t_square	square;
};

int		ft_atoi(char *str);
t_chars	*readhead(int file);
char	**readfirstline(int file, int ***rolltab, t_chars *stats);
void	freemychain(t_letchain **chain);
#endif
