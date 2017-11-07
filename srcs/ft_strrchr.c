/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:06:24 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 16:57:10 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s) + 1;
	if (c == 0)
		return ((char*)(s + i - 1));
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char*)(s + i));
	return (NULL);
}
