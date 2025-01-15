#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src;

	src = "asdfghjkl";
	printf("The string to copy is: %s\n", src);
	printf("The copied string is: %s\n", ft_strdup(src));
	return(0);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		c++;
	}

	ptr = malloc((c + 1) * sizeof(char));
	if (!ptr)
	{
		return NULL;
	}
	c = 0;
	while (src[c] != '\0')
	{
		ptr[c] = src[c];
		c++;
	}
	ptr[c] = '\0';
	return(ptr);
}
