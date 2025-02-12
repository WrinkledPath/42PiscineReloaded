#include "libft.h"

static int	num_length(int n);

//Converts int into string

char	*ft_itoa(int n)
{
	int	len;
	char	*str;
	long	nb;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	nb = (long)n; // In case of INT_MIN size number
	len = num_length(n); //Counts the amount of numbers and saves into len
	str = (char *)malloc((len + 1) * sizeof(char)); //Creates buffer of len + 1 size
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0) //Sets n to negative if necessary
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len > 0)
	{
		len--;
		if (nb == 0 && str[len] == '-')
			return (str);
		str[len] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}


static int	num_length(int n)
{
	int	len;
	
	len = 1;
	if (n < 0)//Accounts for negative number
	{
		n = -n;
		len++;
	}
	while (n >= 10) //Simply adds 1 and deletes the last number every iteration
	{
		n /= 10;
		len++;
	}
	return (len);
}
