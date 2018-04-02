/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:11:05 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 14:48:53 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int n;

	n = 0;
	if (base == 1)
		return (0);
	if (base % 2 == 0)
		n = (ft_collatz_conjecture(base / 2));
	else
		n = (ft_collatz_conjecture(3 * base + 1));
	return (n + 1);
}
