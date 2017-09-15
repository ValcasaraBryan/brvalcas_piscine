/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 01:17:53 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 00:14:53 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int nbr;

	nbr = nb;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		return (0);
	if (nbr > 12)
		return (0);
	while (nb > 1 && nb <= 34)
	{
		nbr = nbr * (nb - 1);
		nb--;
	}
	nb = nbr;
	return (nb);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(12));
	return (0);
}
