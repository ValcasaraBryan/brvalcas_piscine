/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 18:13:19 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 00:17:11 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (0);
	while (index < nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int		ft_recursive_power(int nb, int power)
{
	int nbr;

	nbr = nb;
	if (nbr < 0 || power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power > 1)
		nbr = nbr * ft_recursive_power(nb, power - 1);
	return (nbr);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb < ft_recursive_power(2, 31) - 1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (-1);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(90));
	return (0);
}
