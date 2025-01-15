#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*result;
	int	c;
	int	min, max;

	min = 56;
	max = 100;
	result = ft_range(min, max);
	if (result)
	{
		printf("The array is: ");
		c = 0;
		while (c < (max - min))
		{
			printf("%i ", result[c]);
			c++;
		}
		printf("\n");
	}
	else
	{
		printf("Memory Allocation failed\n");
	}
	return(0);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*ptr;
	int	c;
	
	c = 0;
	size = max - min;
	ptr = (int* )malloc(size * sizeof(int));
	if (!ptr)
	{
		return NULL;
	}
	while (c < size)
	{
		ptr[c] = min + c;
		c++;
	}
	return(ptr);
}
