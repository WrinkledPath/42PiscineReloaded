#include <stdio.h>

#define ABS(Value) ((Value < 0) ? -(Value) : (Value))

int	main(void)
{
	int	nb;

	nb = -5;
	printf("ABS of %i is: %i\n", nb, ABS(nb));
}
