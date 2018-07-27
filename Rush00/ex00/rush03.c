/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:10:27 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/07 13:18:16 by tcastron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		display(int l, char left, char inner, char right)
{
	int j;

	j = 1;
	while (j <= l)
	{
		if (j == 1)
		{
			ft_putchar(left);
		}
		else if (j == l)
		{
			ft_putchar(right);
		}
		else
		{
			ft_putchar(inner);
		}
		j++;
	}
	ft_putchar('\n');
}

void		rush(int l, int h)
{
	int i;

	i = 1;
	while (i <= h && l > 0)
	{
		if (i == 1)
			display(l, 'A', 'B', 'C');
		else if (i == h)
			display(l, 'A', 'B', 'C');
		else
			display(l, 'B', ' ', 'B');
		i++;
	}
}
