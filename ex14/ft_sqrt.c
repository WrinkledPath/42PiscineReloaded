#include <stdio.h>

int	ft_sqrt(int nb);

int	main (void)
{
	int	nb;
	int	result;

	nb = 25;
	result = ft_sqrt(nb);
	printf("The Square Root of %i is %i\n", nb, result);
	return(0);
}

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	low = 0;
	high = nb;
	if (nb <= 0)
	{
		return(0);
	}
	else if (nb == 1)
	{
		return(1);
	}
	while (low <= high)
	{	
		mid = (low + high)/2;
		if (mid * mid == nb)
		{
			return(mid);
		}	
		else if (mid * mid > nb)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return(0);
}
