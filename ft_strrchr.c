#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s) + 1;
	while (--i > 0)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}