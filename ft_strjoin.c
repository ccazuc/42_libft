#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	
	if (!(result = malloc(strlen(s1) + strlen(s2))))
		return (NULL);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	--i;
	while  (s2[++i])
		result[i] = s2[i];
	return (result);
}