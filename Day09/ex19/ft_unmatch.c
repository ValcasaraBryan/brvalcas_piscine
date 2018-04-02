/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:49:28 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 14:56:44 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		paire(int *val_tab, int *val_tab2, int already)
{
	int neg;
	int paire;

	paire = 0;
	neg = 1;
	if (val_tab < val_tab2)
		return (paire * (-neg));
	else if (val_tab > val_tab2)
		return (paire * neg);
	else
		return (already++);
}

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;
	int		c;
	int		already;

	i = 0;
	j = 0;
	c = 0;
	already = 0;
	while (i <= length - 1)
	{
		j = i + 1;
		while (j <= length - 1)
		{
			if (0 == paire(&tab[j], &tab[i], already))
				return (tab[j]);
			if (1 == paire(&tab[j], &tab[i], already))
				return (tab[j]);
			j++;
		}
		i++;
	}
	return (0);
}
