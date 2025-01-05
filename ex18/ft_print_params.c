#include <unistd.h>

void	ft_putchar (char c);

int	main (int argc, char *argv[])
{
	int	f;
	int	s;
	(void)argc;
	
	f = 1;
	while (argv[f] != NULL)
	{
		s = 0;
		while (argv[f][s] != '\0')
		{
			ft_putchar(argv[f][s]);
			s++;
		}
		f++;
		ft_putchar('\n');
	}
}
void	ft_putchar (char c)
{
	write(1, &c, 1);
}
