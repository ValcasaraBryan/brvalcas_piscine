/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:52:33 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/24 14:54:14 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/header.h"

int		ft_atoi(char *str)
{
	int neg;
	int rep;

	neg = 1;
	rep = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		neg = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		rep = rep * 10 + *str - '0';
		str++;
	}
	return (rep * neg);
}
