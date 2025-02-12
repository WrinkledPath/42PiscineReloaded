#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	unsigned char	*srcf;
	unsigned char	*destf;
	
	srcf = (unsigned char *)src;
	destf = (unsigned char *)dest;

	if (!dest && !src)
		return (NULL);
	if (srcf < destf)
	{
		i = size;
		while (i > 0)
		{
			i--;
			destf[i] = srcf[i];
		}
		return (dest);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			destf[i] = srcf[i];
			i++;
		}
	}
	return (dest);
}
