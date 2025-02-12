#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	unsigned long	i;
	unsigned char *cptr1;
	unsigned char *cptr2;
	
	if (size == 0)
		return (0);
	i = 0;
	cptr1 = (unsigned char *) ptr1;
	cptr2 = (unsigned char *) ptr2;
	while (i < size)
	{
		if (cptr1[i] != cptr2[i])
			return (cptr1[i] - cptr2[i]);
		i++;
	}
	return (0);
}
