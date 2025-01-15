/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:22:43 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:01:52 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);
/*
int	main(void)
{
	int	f;
	int	s;
	
	f = 1;
	s = 2;
	printf("Before swap f is %i and s is %i\n", f, s);
	ft_swap(&f, &s);
	printf("After swap f is %i and s is %i\n", f, s);
	return(0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *b;
	*b = *a;
	*a = t;
}
