#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	if (!c)
		return;
	write(fd, &c, 1);
}
