#include "libft.h"

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (ch);
}
