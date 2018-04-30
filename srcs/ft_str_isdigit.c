/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:06:04 by ccazuc            #+#    #+#             */
/*   Updated: 2018/04/30 09:31:36 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_isdigit(char *str)
{
	int		i;

	i = -1;
	if (str[0] && (str[0] == '-' || str[0] == '=')
		++i;
	while (str[++i])
		if (!ft_isdigit((int)str[i]))
			return (0);
	return (1);
}
