/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 07:25:09 by ccazuc            #+#    #+#             */
/*   Updated: 2017/11/07 07:34:09 by ccazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		print_min_value(int fd)
{
	ft_putchar_fd('-', fd);
	ft_putchar_fd('2', fd);
	ft_putchar_fd('1', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('7', fd);
	ft_putchar_fd('4', fd);
	ft_putchar_fd('8', fd);
	ft_putchar_fd('3', fd);
	ft_putchar_fd('8', fd);
}

void			ft_putnbr(int n, int fd)
{
	int		tmp;
	int		length;

	if (nb == -2147483648)
	{
		print_min_value(fd);
		return ;
	}
	length = 1;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	tmp = nb;
	while ((tmp = (tmp / 10)) > 0)
		length *= 10;
	tmp = nb;
	while (length)
	{
		ft_putchar_fd((tmp / length) + '0', fd);
		tmp %= length;
		length /= 10;
	}
}
