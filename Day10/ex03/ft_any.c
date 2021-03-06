/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:38:13 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/17 20:21:35 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_any(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (tab[count])
	{
		if (f(tab[count++]))
			return (1);
	}
	return (0);
}
