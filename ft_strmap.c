#include "libft.h"

void	ft_strmap(char const *s, void (*f)(char))
{
	int		i;
	char	*result;

	if (!(result = malloc(strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		result[i] = (*f)(s[i]);
	return (result);
}