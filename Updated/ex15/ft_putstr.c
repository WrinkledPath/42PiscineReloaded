/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:38:43 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 22:32:24 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str);
//void	ft_putchar (char n);

/*int	main (void)
{
	char *str;

	str = "This is the String";
	ft_putstr(str);
}*/

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/*void	ft_putchar (char n)
{
	write(1, &n, 1);
}*/
