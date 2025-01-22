/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:41:15 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 22:53:39 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	f;
	int	s;

	(void)argc;
	f = 1;
	while (argv[f] != NULL)
	{
		s = 0;
		while (argv[f][s] != '\0')
		{
			ft_putchar(argv[f][s]);
			s++;
		}
		f++;
		ft_putchar('\n');
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
