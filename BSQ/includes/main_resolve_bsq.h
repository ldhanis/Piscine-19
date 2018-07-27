/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_resolve_bsq.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 12:27:42 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/25 14:30:58 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_RESOLVE_BSQ_H
# define MAIN_RESOLVE_BSQ_H
# include "readfile.h"

void	place_square(char **board, t_chars *fdat);
int		resolve(int fd, char **board, int **roll, t_chars *fdat);

#endif
