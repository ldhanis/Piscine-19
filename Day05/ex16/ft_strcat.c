/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:19:53 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/09 22:46:47 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int destln;
	int i;

	destln = 0;
	i = 0;
	while (dest[destln])
		destln++;
	while (src[i])
	{
		dest[destln] = src[i];
		i++;
		destln++;
	}
	dest[destln] = '\0';
	return (dest);
}
