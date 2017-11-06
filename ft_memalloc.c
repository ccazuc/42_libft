#include "libft.h"

void *ft_memalloc(size_t size)
{
	void	*result;
	int		i;
	

	if (!(result = malloc(n)))
		return (NULL);
	i = -1;
	while (++i < n)
		result[i] = 0;
	return (result);
}