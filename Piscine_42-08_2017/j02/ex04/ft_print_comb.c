/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 15:01:33 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/05 00:25:51 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	together(char d, char e, char f)
{
	ft_putchar(d);
	ft_putchar(e);
	ft_putchar(f);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7' && a >= '0')
	{
		b = a + 1;
		while (b <= '9' && b >= '0')
		{
			c = b + 1;
			while (c <= '9' && c >= '0')
			{
				together(a, b, c);
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
