//#include <stdio.h>

void	ft_swap(int *a, int *b);
/*
int	main(void)
{
	int	f;
	int	s;
	
	f = 1;
	s = 2;
	printf("Before swap f is %i and s is %i\n", f, s);
	ft_swap(&f, &s);
	printf("After swap f is %i and s is %i\n", f, s);
	return(0);
}
*/
void	ft_swap(int *a, int *b)
{
	int	t;

	t = *b;
	*b = *a;
	*a = t;

}
