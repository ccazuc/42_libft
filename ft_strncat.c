#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		dest_len;

	dest_len = ft_strlen(dest);
	i = - 1;
	while(src[++i] && i < n)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}