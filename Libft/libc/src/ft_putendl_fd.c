#include "libft.h"

//Writes the s string and a new line into the fd file
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
