/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:05:45 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 22:28:17 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb);

/*int	main (void)
{
	int	nb;
	int	result;

	nb = 25;
	result = ft_sqrt(nb);
	printf("The Square Root of %i is %i\n", nb, result);
	return(0);
}*/

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	if (nb < 0)
		return (0);
	low = 0;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == nb)
		{
			return (mid);
		}
		else if (mid * mid < nb)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (0);
}
