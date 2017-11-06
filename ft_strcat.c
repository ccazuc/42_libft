#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_len;

	dest_len = strlen(dest);
	i = - 1;
	while(src[++i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}