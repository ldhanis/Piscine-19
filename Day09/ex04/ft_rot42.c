/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:26:06 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/12 21:52:21 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			*(str + i) = (((str[i] - 'a') + 42) % 26) + 'a';
		if (str[i] >= 'A' && str[i] <= 'Z')
			*(str + i) = (((str[i] - 'A') + 42) % 26) + 'A';
		i++;
	}
	return (str);
}