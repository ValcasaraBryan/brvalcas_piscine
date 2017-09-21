/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 03:37:40 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/21 07:44:08 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_afficher(int *a, int *b, int *c)
{
	ft_putchar(*a + '0');
	ft_putchar(*b + '0');
	ft_putchar(*c + '0');
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_afficher(&a, &b, &c);
				if (a != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
		c = 0;
		b++;
		}
	b = 0;
	a++;
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
