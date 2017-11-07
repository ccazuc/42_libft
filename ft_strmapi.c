/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 06:34:55 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 06:35:44 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!(result = malloc(strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		((unsigned char*)result)[i] = (*f)((unsigned int)i, s[i]);
	return (result);
}
