/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 11:52:26 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/09 16:14:59 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//void	ft_print_alphabet(void);
//void	ft_print_reverse_alphabet(void);
//void	ft_print_numbers(void);
//void	ft_is_negative(int n);
//void	ft_print_comb(void);
//void	ft_print_comb2(void);
void	ft_putnbr(int nb);

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	//ft_print_alphabet();
	//ft_putchar('\n');
	//ft_print_reverse_alphabet();
	//ft_putchar('\n');
	//ft_print_numbers();
	//ft_putchar('\n');
	//ft_is_negative(15);
	//ft_putchar('\n');
	//ft_print_comb();
	//ft_putchar('\n');
	//ft_print_comb2();
	//ft_putchar('\n');
	ft_putnbr(-5);
	//ft_putchar('\n');
	return (0);
}
