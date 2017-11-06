#include "libft.h"

char	*ft_strndup(char *s)
{
	char	*result;
	int		i;

	i = -1;
	if (!(result = malloc(strlen(s))))
		return (NULL);
	while (str[++i] && i < n)
		result[i] = str[i];
	result[i] = '\0';
	return (result);
}