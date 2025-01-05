//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
int	main (void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 120;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	printf("Result of %i divided by %i is %i. The Remainder is: %i\n", a, b, div, mod);	
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
