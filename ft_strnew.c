#include "libft.h"

char	*ft_strnew(size_t size)
{
		char	*result;
		size_t	i;
		
		if (!(result = malloc(size)))
			return (NULL);
		i = 0;
		while (i < size)
		{
			result[i] = '\0';
			++i;
		}
		return (result);
}