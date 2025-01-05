#include <unistd.h>

void	ft_is_negative(int n);

int	main (void)
{
	ft_is_negative(-5);
	return(0);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
		return;
	}
	write (1, "P", 1);
}
