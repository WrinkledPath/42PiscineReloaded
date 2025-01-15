/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:48:55 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 23:08:44 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));
//int	greater_1 (char *tab);

/*int	main ()
{
	char *tab[] = {"h", "goodbye", "", NULL};
	int	result;

	result = ft_count_if(tab, greater_1);
	printf("There are %i strings with more than 1 char\n", result);
	return(0);
}*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	final;

	final = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) == 1)
		{
			final++;
		}
		i++;
	}
	return (final);
}

/*int	greater_1(char *tab)
{
	int	i;

	i = 0;
	while(tab[i] != '\0')
	{
		i++;
	}
	if(i > 1)
		return (1);
	else
		return (0);
}*/
