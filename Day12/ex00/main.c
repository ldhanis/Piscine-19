/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldhanis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:19:31 by ldhanis           #+#    #+#             */
/*   Updated: 2018/07/18 13:24:21 by ldhanis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr(int out, char *str)
{
	while (str[0] != '\0')
	{
		write(out, &str[0], 1);
		str++;
	}
}

void	display_file(char *name)
{
	int		file;
	char	letter;

	file = open(name, O_RDONLY);
	if (file == -1)
		return ;
	while (read(file, &letter, 1))
		write(1, &letter, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		display_file(argv[1]);
	else if (argc > 2)
		ft_putstr(1, "Too many arguments.\n");
	else
		ft_putstr(1, "File name missing.\n");
	return (0);
}
