#include "libft.h"

void bzero(void *str, size_t n)
{
	while (n  > 0)
		((unsigned char *)str)[n--] = '\0';
}
