#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	unsigned char	*cstr;

	cstr = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		if (cstr[i] == (unsigned char)c)
			return ((void *) &cstr[i]);
		i++;
	}
	return (NULL);
}
