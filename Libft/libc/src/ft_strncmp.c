#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t size)
{
	unsigned long i;
	unsigned char *str1;
	unsigned char *str2;

	if (size == 0)
		return (0);
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (i < size && (s1[i] || s2[i]))
	{
		if ((s1[i] || s2[i]) && str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
