/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:43:50 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 22:53:00 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

/*int	main(void)
{
	int	*result;
	int	c;
	int	min, max;

	min = 56;
	max = 100;
	result = ft_range(min, max);
	if (result)
	{
		printf("The array is: ");
		c = 0;
		while (c < (max - min))
		{
			printf("%i ", result[c]);
			c++;
		}
		printf("\n");
	}
	else
	{
		printf("Memory Allocation failed\n");
	}
	return(0);
}*/

int	*ft_range(int min, int max)
{
	int	size;
	int	*ptr;
	int	c;

	if (min >= max)
		return (NULL);
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
	{
		return (NULL);
	}
	c = 0;
	while (c < size)
	{
		ptr[c] = min + c;
		c++;
	}
	return (ptr);
}
