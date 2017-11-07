/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 05:48:52 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 15:35:37 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (dest + i + 1);
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
	}
	return (NULL);
}
