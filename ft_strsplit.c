#include "libft.h"

static int		get_nb_word(char *str, char match)
{
	int		i;
	int		nb_word;
	int		last_word;
	char	tmp;

	i = -1;
	tmp = str[0];
	last_word = (tmp == match) ? 0 : 1;
	nb_word = 0;
	while (str[++i])
	{
		tmp = str[i];
		if (tmp == match && !last_word)
			continue ;
		if (tmp == match && last_word)
		{
			nb_word++;
			last_word = 0;
		}
		else
			last_word = 1;
	}
	if (i == 1)
		return (-1);
	return ((tmp == match) ? nb_word : nb_word + 1);
}

void	get_n_word(char *str, char **result, const int cur_word, int *index, char match)
{
	int		i;
	int		res_i;

	i = *index;
	while (str[++i])
		if (str[i] == match)
			break ;
	result[cur_word] = malloc((i - *index + 1) * sizeof(**result));
	i = *index - 1;
	res_i = 0;
	while (str[++i])
	{
		if (str[i] == match)
			break ;
		result[cur_word][res_i] = str[i];
		++res_i;
	}
	result[cur_word][res_i] = 0;
	*index = i;
}

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		tot_word;
	int		cur_word;
	char	**result;

	i = -1;
	tot_word = get_nb_word(s);
	if (tot_word == -1)
	{
		result = malloc(1 * sizeof(**result));
		result[0] = 0;
		return (result);
	}
	result = malloc((tot_word + 1) * sizeof(*result));
	cur_word = 0;
	while (s[++i] && cur_word < tot_word)
	{
		if (s[i] != c)
		{
			get_n_word(s, result, cur_word, &i);
			++cur_word;
		}
	}
	result[cur_word] = 0;
	return (result);
}