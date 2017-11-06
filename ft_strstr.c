#include "libft.h"

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int		i;
	int		j;
	int		to_find_len;

	i = strlen(aiguille);
	if (i == 0)
		return (str);
	to_find_len = i;
	i = -1;
	while (meule_de_foin[++i])
	{
		j = 0;
		while (meule_de_foin[i + j] == aiguille[j])
		{
			if (j == to_find_len - 1)
				return (meule_de_foin + i);
			j++;
		}
	}
	return (NULL);
}