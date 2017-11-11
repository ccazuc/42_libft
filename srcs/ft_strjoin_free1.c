/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free12.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:14:47 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/08 12:00:59 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin_free1(char *s1, char *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!(result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = -1;
	while (s1 && s1[++i])
		result[i] = s1[i];
	j = -1;
	while (s2 && s2[++j])
		result[i + j] = s2[j];
	result[i + j] = '\0';
	free(s1);
	return (result);
}
