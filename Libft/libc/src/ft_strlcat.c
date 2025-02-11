#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, int dst_size)
{
	int	dst_len;
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0)
		return (src_len);
	if (dst_len >= dst_size)
		return (dst_size + src_len);
	i = 0;
	while (i < src_len && i + dst_len < dst_size - 1)
	{
		dst[dst_len + i] = src[i];		
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
