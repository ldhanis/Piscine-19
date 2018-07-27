/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:32:06 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 22:47:09 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int destln;

	i = 0;
	destln = 0;
	while (dest[destln])
		destln++;
	while (i < nb && src[i])
	{
		dest[destln] = src[i];
		destln++;
		i++;
	}
	dest[destln] = '\n';
	return (dest);
}
