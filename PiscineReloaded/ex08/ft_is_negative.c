/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:54:04 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 22:15:40 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);
/*int	main (void)
{
	ft_is_negative(-5);
	return(0);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar(c);
		return ;
	}
	write (1, "P", 1);
}
