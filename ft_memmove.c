#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if(dest < src)
	{
		int i;

		i = 0;
		while (i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i++];
	}
	else
		while (n  > 0)
			((unsigned char *)dest)[--n] = ((unsigned char *)src)[n];
	return ((unsigned char *)dest);
}
