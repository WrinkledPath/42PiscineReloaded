#include "header.h"

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, str++, 1);
		i++;
	}
}
