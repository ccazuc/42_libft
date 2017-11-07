/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:38:49 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:38:51 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		++i;
	start = i;
	end = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		++i;
	end = i;
	if (end < start || end == start)
		return (ft_memalloc(0));
	return (ft_strsub(s, start, end - start));
}
