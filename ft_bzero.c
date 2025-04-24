#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	while (n  > 0)
		((unsigned char *)str)[n--] = '\0';
}
