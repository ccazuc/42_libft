#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		to_find_len;

	i = strlen(little);
	if (i == 0)
		return (str);
	to_find_len = i;
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j == to_find_len - 1)
				return (big + i);
			j++;
		}
		++i;
	}
	return (NULL);
}