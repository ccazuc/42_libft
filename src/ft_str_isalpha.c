/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:02:17 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 11:05:57 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_isalpha(const char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (!ft_isalpha((int)str[i]))
			return (0);
	return (1);
}