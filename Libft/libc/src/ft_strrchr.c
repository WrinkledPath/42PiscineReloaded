#include "libft.h"

//Returns a pointer to the last occurrence of the char c in the string str

char	*ft_strrchr(char *str, size_t c)
{
	int	len;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return ((char *) &str[len]);
		len--;
	}
	return (NULL);
}
