#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t dst_len)
{
	size_t	i;

	if (dst_len == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dst_len - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
