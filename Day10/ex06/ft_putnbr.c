/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 11:39:34 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 21:00:47 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(long int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb < (-9))
		{
			ft_putnbr(-nb / 10);
			ft_putchar(-nb % 10 + '0');
		}
		else
			ft_putchar(-nb + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}
