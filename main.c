/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 07:44:11 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 08:00:48 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(int value[2])
{
	(void)value;
}

int		main(int argc, char **argv)
{
	char	**result;
	int		i;

	if (argc <= 2)
		return (0);
	i = -1;
	result = ft_strsplit(argv[1], argv[2][0]);
	while (result[++i])
		ft_putendl(result[i]);
	return (0);
}
