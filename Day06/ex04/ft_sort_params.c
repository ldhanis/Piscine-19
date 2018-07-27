/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:50:57 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/10 14:30:58 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			ft_my_strcmp(char *s1, char *s2)
{
	int comp;

	comp = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 < *s2)
		return (-1);
	if (*s2 < *s1)
		return (1);
	return (0);
}

void		ft_my_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		i;
	void	*temp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_my_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (argv[i])
	{
		ft_my_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
