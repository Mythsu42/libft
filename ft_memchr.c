#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while(n-- > 0)
		if (((unsigned char *)str)[i++] == (unsigned char)c)
			return ((unsigned char *)str + --i);
	return (NULL);
}
