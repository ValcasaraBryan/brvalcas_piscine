/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 19:51:34 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/20 16:26:54 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int total;
	int i;
	int	index;

	total = max + (-min);
	i = min;
	index = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(*range) * total);
	if (tab == NULL)
		return (0);
	while (i < max)
		tab[index++] = i++;
	*range = tab;
	return (total);
}
