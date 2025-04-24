#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	size_max;

	size_max = -1;
	if (nmemb != 0 && size > size_max / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
