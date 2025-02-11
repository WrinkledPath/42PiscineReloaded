#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t size)
{
	size_t	i;
	unsigned char	*srcf;
	unsigned char	*destf;
	
	i = 0;
	if (!dest || !src)
		return (dest);
	srcf = (unsigned char *)src;
	destf = (unsigned char *)dest;
	while (i < size)
	{
		destf[i] = srcf[i];
		i++;
	}
	return (dest);
}
