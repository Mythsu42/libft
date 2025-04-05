#include "libft.h"

void	ft_putchar_fd(char *str,int fd)
{
	if (!str)
		return;
	while (*str)
		write(fd, str++, 1);
}
