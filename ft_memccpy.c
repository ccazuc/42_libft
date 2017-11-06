#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	
	i = -1;
	while (++i < n)
	{
		if (src[i] = c)
			return (dest + i + 1);
		dest[i] = src[i];
	}
	return (NULL);
}