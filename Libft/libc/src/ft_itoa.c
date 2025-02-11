#include "libft.h"

static int	num_length(int n);
static void	fill_number(char *str, int n, int len);

//Converts int into string

char	*ft_itoa(int n)
{
	int	len;
	char	*str;

	if (n == INT_MIN) //Edge case check
		return (ft_strdup("-2147483648"));
	len = num_length(n); //Counts the amount of numbers and saves into len
	str = (char *)malloc((len + 1) * sizeof(char)); //Creates buffer of len + 1 size
	if (!str)
		return (NULL);
	if (n < 0) //Sets n to negative if necessary
		n = -n;
	fill_number(str, n, len); //Fills str buffer with resulting string
	return (str);
}

static void	fill_number(char *str, int n, int len)
{
	str[len] = '\0'; //Sets null terminator
	while (len--) 
	{
		str[len] = '0' + (n % 10); //Converts int to char
		n /= 10; //Deletes the last letter
		if (len == 1 && str[len] == '0') //Adds "-" if necessary
			str[len] = '-';
	}
}

static int	num_length(int n)
{
	int	i;
	
	i = 1;
	if (n < 0)//Accounts for negative number
		i++;
	while (n / 10 != 0) //Simply adds 1 and deletes the last number every iteration
	{
		n /= 10;
		i++;
	}
	return (i);
}
