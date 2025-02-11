#include "libft.h"´

// Joins 2 strings (s1 and s2). Returns dynamically allocated string with combination of s1/s2
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (!s1 || !s2)//Edge case check
		return (NULL);
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char)); //Allocating memory of size s1 + s2
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++]; //S1 is allocated
	i = 0; //Reset of i
	while (s2[i])
		res[j++] = s2[i++]; //S2 is allocated
	res[j] = 0;
	return (res);
}
