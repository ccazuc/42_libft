/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 05:58:28 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:02:05 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*result;
	int		i;

	i = -1;
	if (!(result = malloc(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		result[i] = s[i];
	result[i] = '\0';
	return (result);
}
