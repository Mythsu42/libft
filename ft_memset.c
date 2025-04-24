#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t nbr)
{	
	size_t	i;

	i = 0;

	while (i < nbr)
		((unsigned char *)ptr)[i++] = (unsigned char)n;
	return (ptr);
}
