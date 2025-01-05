#include <unistd.h>

void	ft_putstr(char *str);

int	main (void)
{
	char *str;

	str = "This is the String";
	ft_putstr(str);
}

void	ft_putstr(char *str)
{
	while (str != "\0")
	{
		write(1, str, 1);
		str++;
	}
}
