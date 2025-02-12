#include "libft.h"
//Returns a pointer to the first chr ocurrance
char	*ft_strchr(const char *str, int chr)
{
	if (!str)
		return (NULL);
	while (*str != (char) chr && *str)
		str++;
	if (*str == (char) chr)
		return ((char *) str);
	return (NULL);
}
