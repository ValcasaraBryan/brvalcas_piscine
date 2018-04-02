/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:06:59 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 11:49:51 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *tab_;

	i = -1;
	if (!(tab_ = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i++ < length)
		tab_[i] = f(tab[i]);
	return (tab_);
}
