/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:25:05 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:04:14 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb);

/*int	main(void)
{
	int	fn;
	int	result;

	fn = 7;
	result = ft_iterative_factorial(fn);
	printf("The factorial of %i is: %i\n", fn, result);
	return(0);
}*/

int	ft_iterative_factorial(int nb)
{
	int	tmp;
	int	c;

	tmp = 1;
	c = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (c <= nb)
	{
		tmp = tmp * c;
		c++;
	}
	return (tmp);
}
