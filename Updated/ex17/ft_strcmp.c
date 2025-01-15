/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:40:01 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:09:11 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

/*int	main (void)
{
	char	*s1;
	char	*s2;
	int	result;

	s1 = "a";
	s2 = "";
	result = ft_strcmp(s1, s2);
	printf ("Result: %i\n", result);
	return(0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	if (s1[c] != '\0' || s2[c] != '\0')
	{
		return (s1[c] - s2[c]);
	}
	return (0);
}
