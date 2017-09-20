/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:31:30 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 18:17:15 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int nbr;

	nbr = nb;
	if (power < 0)
		return (0);
	if (nbr == 1)
		return (nb);
	if (nbr == 0)
		return (0);
	while (power > 1)
	{
		nb = nb * nbr;
		power--;
	}
	return (nb);
}

int		main(void)
{
	printf("%d\n", ft_iterative_power(2, -31) - 1); //valeur max int
	printf("%d\n", ft_iterative_power(2, -31)    ); //valeur min int
	return (0);
}
