#include "libft.h"

//Applies a function to each char of a string. Returns new string modified by f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char)); //Assigns dynamic memory for result
	if (!str) //Edge case check
		return (NULL);
	i = 0;
	while (i < ft_strlen(s)) //Applies function to each char
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0'; //Null terminator
	return (str);
}
