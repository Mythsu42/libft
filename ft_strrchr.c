#include "libft.h"

char  *strrchr(const char *str,int c)
{
	size_t i;

	i = ft_strlen(str) + 1;
	while (i-- > 0)
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	return (NULL);
}
