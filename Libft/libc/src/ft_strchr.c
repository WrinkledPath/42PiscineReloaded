#include "libft.h"
//Returns a pointer to the first chr ocurrance
char	*ft_strchr(char *str, int chr)
{
	if (!str)
		return (NULL);
	while (*str != (char) chr && *str)
		str++;
	if (*str == (char) c)
		return ((char *) str);
	return (NULL);
}
