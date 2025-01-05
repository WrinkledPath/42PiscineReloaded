#include <stdio.h>

int	ft_strlen(char *str);

int	main (void)
{
	char	*str;
	int	result;

	str = "Whatduupp boii";
	result = ft_strlen(str);
	printf("The length of the string is: %i\n", result);
	return(0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return(c);
}
