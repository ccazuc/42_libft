#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	ret;
	size_t			i;
	size_t			j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	ret = j + (size < i ? size : i);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ret);
}