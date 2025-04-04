#include "libft.h"

char  *strchr(const char *str,int c)
{
	size_t i;

	i = - 1;
	while (str[++i])
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	if ((char)c == '\0')
			return ((char *)&str[i]);
	return (NULL);
}
