/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 12:45:31 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/12 18:24:24 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_(int nb)
{
	int index;

	index = 2;
	if (nb <= 1)
		return (0);
	while (index < nb)
	{
		if (0 == nb % index)
			return (0);
		index++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (1 != ft_is_prime_(nb))
		nb++;
	return (nb);
}
