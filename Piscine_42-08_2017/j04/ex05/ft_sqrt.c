/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:41:40 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 00:16:13 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int impaire;
	int result;
	int compt;

	impaire = 1;
	result = 0;
	compt = -1;
	while (result <= nb)
	{
		if (nb <= 0)
			return (0);
		result = result + impaire;
		impaire += 2;
		compt++;
	}
	if (compt < 0)
		return (0);
	if (nb == (compt * compt))
		return (compt);
	return (0);
}

int		main(void)
{
	printf("%d", ft_sqrt(49));
	return (0);
}
