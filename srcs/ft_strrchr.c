/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:06:24 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 16:52:45 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = strlen(s) + 1;
	//printf("s: %s, c: %d\n", s + i - 1, c);
	/*if (s[i - 1] == c)
		return ((char*)(s));*/
	if (c == 0)
		return ((char*)(s + i - 1));
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char*)(s + i));
	return (NULL);
}
