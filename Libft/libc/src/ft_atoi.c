#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' || *str == '\t' || *str == '\v') //Skip Whitespaces
		++str;
	if (*str == '+' || *str == '-')//Check if it's positive or negative
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')//Assign the char literals as ints
	{
		n = (n * 10) + (*str - '0');//Multiplies by 10 to access the next value 1 * 10 + '2' - '0' = 12
		str++;
	}
	return (n * sign);//Multiplies by sign to convert into negative if necessary
}
