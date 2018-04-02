/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 16:50:01 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/24 14:56:55 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/header.h"

void	print_line(int y, int x, int x_init, int y_init)
{
	if ((y == y_init) || (y == 1))
	{
		if (x != x_init)
		{
			ft_putchar('B');
		}
		if (x == 1)
		{
			if (y == y_init)
				ft_putchar('C');
			if (y == 1 && y_init != 1)
				ft_putchar('A');
		}
	}
	else
	{
		if (x != x_init)
			ft_putchar(' ');
		if (x == 1)
			ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int y_init;
	int x_init;

	y_init = y;
	x_init = x - 1;
	if ((y <= 0) || (x <= 0))
		return ;
	while (y)
	{
		if (y == y_init)
			ft_putchar('A');
		if (y == 1 && y_init != 1)
			ft_putchar('C');
		if ((y != y_init) && (y != 1))
			ft_putchar('B');
		x = x_init;
		while (x)
		{
			print_line(y, x, x_init, y_init);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
