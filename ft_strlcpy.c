#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while ((char *)src[i++])
	if (dstsize == 0)
		return (i);
	while ((char *)src[j] && j < dstsize - 1)
		dst[j] = src[j++];
	dst[j] = '\0';
	return (i);
}
