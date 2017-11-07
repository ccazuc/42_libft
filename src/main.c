/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 07:44:11 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 12:23:20 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(int value[2])
{
	(void)value;
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc <= 1)
		return (0);
	i = -1;
	ft_putendl(ft_strtrim(argv[1]));	
	return (0);
}
