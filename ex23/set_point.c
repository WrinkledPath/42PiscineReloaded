#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point	point;
	
	point.x = 24;
	point.y = 12;
	printf("Before assignment x is %i and y is %i\n", point.x, point.y);
	set_point(&point);
	printf("After assignment x is %i and y is %i\n", point.x, point.y);
	return (0);
}
