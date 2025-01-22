/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:26:04 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:05:32 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb);

/*int	main (void)
{
	int	nb;
	int	result;

	nb = 5;
	result = ft_recursive_factorial(nb);
	printf("The factorial of %i is: %i\n", nb, result);
	return(0);
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
