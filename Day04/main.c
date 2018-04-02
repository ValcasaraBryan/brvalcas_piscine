/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 20:21:24 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/13 00:05:08 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 5;
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_recursive_factorial(13));
	printf("%d\n", ft_iterative_power(3, 2));
	printf("%d\n", ft_recursive_power(3, 2));
	
	
	printf("\nsuite de fibonacci : %d\n\n", ft_fibonacci(i));
	ft_putchar(ft_fibonacci(i) + '0');
	
	
	printf("\n\n%d\n", ft_sqrt(9));
//	while (++i != 2147483647)
//		printf("%d, %d\n", i, ft_is_prime(i));
//	i = -5;
//	ft_putchar('\n');
//	while (++i != 2147483647)
//		printf("%d, %d\n", i, ft_find_next_prime(i));
	return (0);
}
