/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 05:47:22 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 07:32:31 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	((unsigned char *)dest)[i] = '\0';
	return (dest);
}
