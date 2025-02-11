#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, int size)
{
	int	i;
	const char *cptr1;
	const char *cptr2;
	
	if (n == 0)
		return (0);
	i = 0;
	cptr1 = (unsigned char) ptr1;
	cptr2 = (unsigned char) ptr2;
	while (i < size)
	{
		if (cptr1[i] != cptr2[i])
			return (cptr1[i] - cptr2[i]);
		i++;
	}
	return (0);
}
