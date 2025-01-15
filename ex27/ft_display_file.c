/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 19:36:54 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 19:36:57 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_write(char *argv[]);

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 18);
		return(-1);		
	}
	else if (argc < 2)
	{
		write(1, "File name missing.\n", 18);
		return(-2);
	}
	else
	{
		ft_write(argv);
	}
	return(0);
}

int	ft_write(char *argv[])
{
	int	sz;
	int	fd;
	char	buffer[100];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return(-3);
	}
	sz = read(fd, buffer, 100);
	if (sz != 0)
	{
		buffer[sz] = '\0';
		write(1, buffer, sz);
		return(0);
	}
	return(-4);
}

