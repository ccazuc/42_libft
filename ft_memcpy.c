#include "libft.h"

void *ft_memcpy(void *dest, const void *src, site_t n)
{
	size_t i;
	
	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}