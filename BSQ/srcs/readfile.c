/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uthieffr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 12:03:24 by uthieffr          #+#    #+#             */
/*   Updated: 2018/07/25 16:35:54 by uthieffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "readfile.h"

t_letchain	*readline(int file, int *len)
{
	t_letchain	*curr;
	t_letchain	*ret;

	if (!(curr = (t_letchain*)malloc(sizeof(t_letchain))))
		return (0);
	ret = curr;
	while (read(file, &curr->c, 1) > 0 && curr->c != '\n')
	{
		curr->next = (t_letchain*)malloc(sizeof(t_letchain));
		if (!(curr->next))
			return (0);
		curr = curr->next;
		curr->c = '\0';
		curr->next = 0;
		(*len)++;
	}
	return (ret);
}

void		convstr(t_letchain *chain, char *str)
{
	t_letchain *del;

	while (chain)
	{
		*str = chain->c;
		del = chain;
		chain = chain->next;
		free(del);
		str++;
	}
	*str = '\0';
}

int			readlinelink(t_chars *chars, t_letchain *chain,
		int *roline, char *str)
{
	int			i;

	i = 0;
	while (chain)
	{
		if (chain->c == chars->wall)
			*roline = 0;
		else if (chain->c == chars->null)
			*roline = 1;
		else if (chain->c == '\n')
			return (0);
		else
			return (1);
		if (*roline > chars->square.size)
		{
			chars->square.size = *roline;
			chars->square.x = i;
		}
		*str++ = chain->c;
		freemychain(&chain);
		i++;
		roline++;
	}
	return (0);
}

t_chars		*readhead(int file)
{
	int			headlen;
	t_letchain	*head;
	char		*headstr;
	t_chars		*headparams;

	headlen = 0;
	head = readline(file, &headlen);
	headstr = (char*)malloc(sizeof(char) * (headlen + 1));
	headparams = (t_chars*)malloc(sizeof(t_chars));
	if (!headstr || !head || !headparams || headlen < 4)
		return (0);
	convstr(head, headstr);
	headparams->full = headstr[--headlen];
	headparams->wall = headstr[--headlen];
	headparams->null = headstr[--headlen];
	headstr[headlen] = 'z';
	if (headstr[--headlen] < '0' || headstr[headlen] > '9')
		return (0);
	headparams->linenbr = ft_atoi(headstr);
	free(headstr);
	return (headparams);
}

char		**readfirstline(int file, int ***rolltab, t_chars *stats)
{
	t_letchain	*firstline;
	char		**ret;
	int			i;

	stats->colnbr = 0;
	firstline = readline(file, &stats->colnbr);
	ret = (char**)malloc(sizeof(char*) * stats->linenbr);
	i = 0;
	while (i < stats->linenbr)
		if (!(ret[i++] = (char*)malloc(sizeof(char) * stats->colnbr)))
			return (0);
	*rolltab = (int**)malloc(sizeof(int*) * 2);
	(*rolltab)[0] = (int*)malloc(sizeof(int) * (stats->colnbr + 1));
	(*rolltab)[1] = (int*)malloc(sizeof(int) * (stats->colnbr + 1));
	i = 0;
	while (i < stats->linenbr)
		(*rolltab)[1][i++] = 0;
	(*rolltab)[0][0] = 0;
	if (readlinelink(stats, firstline, &(*rolltab)[0][1], ret[0]))
		return (0);
	return (ret);
}
