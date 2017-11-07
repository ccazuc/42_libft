/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:33:38 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:34:51 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	if (!(result = malloc(strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		((unsigned char*)result)[i] = (*f)(s[i]);
	return (result);
}
