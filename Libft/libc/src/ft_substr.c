#include "libft.h"

//Extract a substring from a string into dynamic memory with a max lenght of len

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len) //Returns Null terminated byte
		return (ft_calloc(1, 1));
	if (len > s_len - start) //Adjusts len in case len is larger than the remaining string length 
		len = s_len - start;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[len] = '\0';
	return (str);
}
