#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (len > 0)
	{
		*p = (unsigned char)value;
		p++;
		len--;
	}
	return (ptr);
}
