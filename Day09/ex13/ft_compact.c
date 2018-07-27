/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:46:49 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/13 14:07:54 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_compact(char **tab, int length)
{
	int del;
	int i;
	int in_l;

	i = 0;
	in_l = length;
	while (i < length)
	{
		while (*(tab + i))
			i++;
		if (i < length)
		{
			del = i;
			length--;
			while (del < length)
			{
				tab[del] = tab[del + 1];
				del++;
			}
		}
	}
	i = 0;
	while (length + i < in_l)
		tab[length + i++] = 0;
	return (length);
}
