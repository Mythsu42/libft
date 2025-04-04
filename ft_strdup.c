#include "libft.h"

char *strdup(const char *s)
{
	char  *cpy;
	size_t len = ft_strlen(s);

	cpy = malloc(sizeof(char) * ++len);
	if (!cpy)
		return (NULL);
	cpy[len] = '\0';
	while (len-- >= 0)
		cpy[len] = s[len--];
	return (cpy);
}
