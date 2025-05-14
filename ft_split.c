#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**result;
	char	*str;
	char	*sep;
	size_t	i;
	size_t	j;
	size_t	k;

	sep = {c,'\0'};
	str = ft_strtim(s,c);
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c || str[i] == '\0')
			j++;
		i++;
	}
	result = malloc(j + 1);
	result[j] = '\0';
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] != )
	}
	return (result);
}
