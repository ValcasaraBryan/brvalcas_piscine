/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:12:15 by hcourtia          #+#    #+#             */
/*   Updated: 2017/09/16 19:34:30 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	draw01(int h, int l, int x, int y)
{
	if (h == 1)
		if (l == 1)
			ft_putchar('/');
		else if (l == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	else if (h == y)
		if (l == 1)
			ft_putchar('\\');
		else if (l == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	else
		(l == 1 || l == x) ? ft_putchar('*') : ft_putchar(' ');
}

void	rush(int x, int y)
{
	int h;
	int l;

	h = 0;
	while (++h <= y)
	{
		l = 0;
		while (++l <= x)
		{
			draw01(h, l, x, y);
		}
		ft_putchar('\n');
	}
}
