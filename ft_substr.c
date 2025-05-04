#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t s_len;
	size_t i;


	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1,1));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len && s[start])
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
