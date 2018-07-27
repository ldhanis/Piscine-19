/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 11:13:41 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/05 12:18:39 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	char	swap;
	int		length;
	int		i;

	i = 0;
	length = -1;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	str -= length + 1;
	while (i < (length + 1) / 2)
	{
		swap = *(str + i);
		*(str + i) = *(str + length - i);
		*(str + length - i) = swap;
		i++;
	}
	return (str);
}
