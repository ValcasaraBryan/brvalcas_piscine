/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 10:38:10 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 18:19:13 by bvalcasa         ###   ########.fr       */
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
	if (nb == 0)
		return (0);
	while (index < nb)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int		main(void)
{
	printf("%d", ft_is_prime(2));
	return (0);
}
