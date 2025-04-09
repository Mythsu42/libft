#include "libft.h"

void ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		ft_putstr_fd("-2147483648",fd);
	if (nb < 0)
	{
		write(fd, "-",1);
		nb *= -1;
	}
	if( nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
