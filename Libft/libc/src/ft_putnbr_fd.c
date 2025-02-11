#include "libft.h"

//Writes an int into a specified file

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN) //Edge check for overflow
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0) //Checks for negative numbers
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n >= 10) //Recurses until a single digit is left and converts to char to then output in fd 
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	if (n < 10) //Base case, Recurses once reached
	{
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
