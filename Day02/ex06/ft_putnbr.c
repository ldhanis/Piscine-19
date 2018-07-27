/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:06:44 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/05 17:29:32 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	int digit;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		digit = nb % 10;
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(digit + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
