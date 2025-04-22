#include "libft.h"

char	*ft_strnstr(const char *str, const char *needstr, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!*needstr)
		return ((char *)str);
	while (i < len && str[i])
	{
		while (str[i + j] == needstr[j] && (i + j) < len)
			j++;
				if (!needstr[j])
					return ((char *)&str[i]);	
		j = 0;
		i++;
	}
	return (NULL);
}
