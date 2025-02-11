#include "libft.h"

//Trims from either side of a str
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)//Edge case check
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))//Puts the s1 pointer to a char that isn't set
		s1++;
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	while (len > 0 && ft_strchr(set, s1[len - 1]))//Decreases the len pointer from the end to a non-set char
		len--;
	return (ft_substr(s1, 0 ,len));//Returns the trimed substring

}
