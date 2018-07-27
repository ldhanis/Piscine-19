/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 15:22:25 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/05 17:33:08 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putchar(48 + (nbr1 / 10));
			ft_putchar(48 + (nbr1 % 10));
			ft_putchar(' ');
			ft_putchar(48 + (nbr2 / 10));
			ft_putchar(48 + (nbr2 % 10));
			if (!(nbr1 == 98 && nbr2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}
