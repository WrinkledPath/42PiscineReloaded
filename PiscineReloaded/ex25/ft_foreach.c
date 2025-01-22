/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:48:03 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:51:32 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
//void	ft_putnbr (int n);

/*int	main()
{
	int	tab[] = {1, 2, 3, 4, 5, 6};

	ft_foreach(tab, 3, &ft_putnbr);
	return(0);
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*void	ft_putnbr (int n)
{
	printf("%i", n);	
}*/
