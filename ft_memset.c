#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t nbr)
{	
	while (nbr > 0)
		((unsigned char *)ptr)[--nbr]= (unsigned char)n;
	return (ptr);
}
