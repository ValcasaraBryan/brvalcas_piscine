/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:07:42 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/26 14:28:25 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int		multi(int	bouh)
{
	return (bouh + 1);
}



int		main(void)
{
	int i[10] = {10, 51, 51, 56, 85, 12, 75, 59, 51, 10};
	int *tab;
	int index;

	index = 0;
	tab = ft_map(i, 10, &multi);
	while (index < 10)
		printf("%d\n", tab[index++]);

	return (0);
}
