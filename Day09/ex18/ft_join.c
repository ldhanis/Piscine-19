/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:52:52 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/13 16:17:47 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		ft_mylen(char *str)
{
	int len;

	len = 0;
	while (*(str++) != '\0')
		len++;
	return (len);
}

unsigned int		ft_mysize(char **tab, char *sep, unsigned int *nstr)
{
	unsigned int	len;
	char			**vcpy;
	int				i;

	vcpy = tab;
	*nstr = 0;
	while (vcpy[*nstr] != 0)
		(*nstr)++;
	if (*nstr == 0)
		return (0);
	else
		len = ft_mylen(sep) * (*nstr - 1) + 1;
	i = 0;
	while (tab[i] != 0)
		len += ft_mylen(tab[i++]);
	return (len);
}

char				*ft_myadd(char *src, char *dest)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char				*ft_join(char **tab, char *sep)
{
	unsigned int	i;
	unsigned int	nstr;
	char			*dest;
	char			*ret;

	dest = (char*)malloc(sizeof(char) * ft_mysize(tab, sep, &nstr));
	i = 0;
	ret = dest;
	while (i < nstr)
	{
		dest = ft_myadd(*(tab + i++), dest);
		if (i != nstr)
			dest = ft_myadd(sep, dest);
	}
	return (ret);
}
