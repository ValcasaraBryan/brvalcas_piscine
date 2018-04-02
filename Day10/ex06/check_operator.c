/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:16:58 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 20:55:30 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_operator(int val_2, char *operateur)
{
	while (*operateur != '\0')
	{
		if (val_2 == 0 && *operateur == '/')
		{
			ft_putstr(DIVISION);
			return (TRUE);
		}
		if (val_2 == 0 && *operateur == '%')
		{
			ft_putstr(MODULO);
			return (TRUE);
		}
		if (*operateur != '/' && *operateur != '%' && *operateur != '+'
				&& *operateur != '-' && *operateur != '*')
		{
			ft_putstr(ZERO);
			return (TRUE);
		}
		operateur++;
	}
	return (FALSE);
}
