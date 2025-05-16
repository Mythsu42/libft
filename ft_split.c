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
	str = ft_strtim(s,sep);
	i = 0;
	j = 1;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
			while (str[i] == c)
				i++;
			j++;
		i++;
	}
	result = malloc(sizeof(char *) * ++j);
	if (!result)
		return (NULL);
	result[j] = NULL;
	i = 0;
	j = 0;
	while (str[i] || str[i - 1])
	{
		while (str[i] != c || str[i] != '\0')
			i++;
		result[j] = malloc(++i);
		if (!result[j])
			return (NULL);
		j++;
	}
	i = 0;
	j = 0;
	while (str[i] || str[i - 1])
	{
		while (str[i] != c && str[i])
		{
			result[j][k] = str[i];
			i++;
			k++;
		}
		result[k] = '\0';
		k = 0;
		j++;
	}
	return (result);
}
