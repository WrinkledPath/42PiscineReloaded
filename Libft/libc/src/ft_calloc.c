#include "libft.h"

//Creates dynamic memory and initializes it with 0s
void	*ft_calloc (size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t	i;
	
	if (count == 0 || size == 0)
		return (malloc(1));
	if (count > INT_MAX / size)
		return (NULL);
	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}
