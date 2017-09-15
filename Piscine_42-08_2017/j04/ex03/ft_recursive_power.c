/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:49:17 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 00:15:24 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	printf("%d", ft_recursive_power(2, 31) - 1);
	return (0);
}
