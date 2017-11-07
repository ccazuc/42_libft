/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:09:45 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 10:51:00 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int		size;

	size = n > 0 ? 1 : 2;
	n = n > 0 ? n : -n;
	while (n > 0)
	{
		n /= 10;
		++size;
	}
	return (size);
}

static char	*do_malloc(int *n)
{
	char	*result;

	if (!(result = malloc(get_len(*n))))
		return (NULL);
	if (*n < 0)
	{
		*n = -*n;
		result[0] = '-';
	}
	return (result);
}

char		*ft_itoa(int n)
{
	int		tmp;
	int		length;
	char	*result;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	result = do_malloc(&n);
	length = 1;
	tmp = n;
	while ((tmp = (tmp / 10)) > 0)
		length *= 10;
	tmp = n;
	i = result[0] == '-' ? 1 : 0;
	while (length)
	{
		result[i] = ((tmp / length) + '0');
		tmp %= length;
		length /= 10;
		++i;
	}
	return (result);
}
