/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 01:17:53 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/11 17:30:55 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				swap = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}
