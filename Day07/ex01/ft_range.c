/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 11:15:21 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/19 23:43:48 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	total;
	int	index;

	total = max + (-min);
	i = min;
	index = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * total);
	if (tab == NULL)
		return (NULL);
	while (i < max)
		tab[index++] = i++;
	return (tab);
}
