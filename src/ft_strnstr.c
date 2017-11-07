/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:10:51 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:11:49 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		to_find_len;

	i = strlen(little);
	if (i == 0)
		return (char*)(big);
	to_find_len = i;
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j == to_find_len - 1)
				return ((char*)(big + i));
			j++;
		}
		++i;
	}
	return (NULL);
}
