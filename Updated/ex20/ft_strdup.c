/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:42:41 by ywagner           #+#    #+#             */
/*   Updated: 2025/01/15 21:52:18 by ywagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

/*int	main(void)
{
	char	*src;

	src = "asdfghjkl";
	printf("The string to copy is: %s\n", src);
	printf("The copied string is: %s\n", ft_strdup(src));
	return(0);
}*/

char	*ft_strdup(char *src)
{
	int		c;
	char	*ptr;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	ptr = malloc((c + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	c = 0;
	while (src[c] != '\0')
	{
		ptr[c] = src[c];
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}
