/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboilley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 10:05:43 by mboilley          #+#    #+#             */
/*   Updated: 2017/09/04 11:14:50 by mboilley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	a = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		a = a * (-1);
	}
	if (a <= 9)
	{
		ft_putchar(a / 10);
		ft_putnbr(a % 10);
	}
}

int		main(void)
{
	return (0);
}

