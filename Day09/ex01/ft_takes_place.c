/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:03:28 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 14:47:04 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_translate(int hour)
{
	if (hour % 24 == 00)
		printf("12.00 A.M.");
	if (hour % 24 == 12)
		printf("12.00 P.M.");
	if (hour % 24 < 12 && hour % 24 > 0)
		printf("%d.00 A.M.", hour % 12);
	if (hour % 24 > 12 && hour % 24 < 24)
		printf("%d.00 P.M.", hour % 12);
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_translate(hour);
	printf(" AND ");
	ft_translate(hour + 1);
	printf("\n");
}
