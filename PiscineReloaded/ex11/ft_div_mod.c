/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:23:16 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:02:37 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
int	main (void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 120;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("%i\n", a, b, div, mod);	
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
