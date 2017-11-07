/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:36:27 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:37:32 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!(result = malloc(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		++i;
	}
	result[i] = '\0';
	return (result);
}
