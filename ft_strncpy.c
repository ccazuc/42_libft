#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = - 1;
	while (src[++i] && i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
