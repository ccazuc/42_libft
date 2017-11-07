/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 05:48:52 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 07:32:51 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char*)src)[i] == c)
			return (dest + i + 1);
		((unsigned char *)dest)[i] = ((unsigned char*)src)[i];
	}
	return (NULL);
}
