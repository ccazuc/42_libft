/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:27:33 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 07:38:07 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*result;
	size_t	i;

	if (!(result = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = '\0';
		++i;
	}
	result[i] = '\0';
	return (result);
}
