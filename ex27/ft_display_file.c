#include <unistd.h>

int	main((int argc, char *argv[]))
{
	if (argc > 1)
	{
		ft_putstr("Too many arguments.");
	}
	if else (argc == 0)
	{
		ft_putstr("File name missing.");
	}


}

void	ft_putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}
