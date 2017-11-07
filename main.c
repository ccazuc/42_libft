/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 07:44:11 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 10:41:16 by ccazuc           ###   ########.fr       */
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
	ft_putstr(ft_itoa(ft_atoi(argv[1])));
	return (0);
}
