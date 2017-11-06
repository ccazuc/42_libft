#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char tmp[n];
	size_t i;
	
	i = -1;
	while (++i < n)
		tmp[i] = src[i];
	i = -1;
	while (++i < n)
		dest[i] =  tmp[i];
	return (dest);
}