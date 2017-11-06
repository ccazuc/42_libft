#include "libft.h"

void	ft_strmapi(char const *s, void (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!(result = malloc(strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		result[i] = (*f)((unsigned int)i, s[i]);
	return (result);
}