/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:56:53 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 21:24:04 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	do_op(long int val_1, long int val_2, char *operateur)
{
	t_opera	name[6];
	int		i;

	name[0].f = &addition;
	name[0].ope = '+';
	name[1].f = &soustraction;
	name[1].ope = '-';
	name[2].f = &multiplication;
	name[2].ope = '*';
	name[3].f = &division;
	name[3].ope = '/';
	name[4].f = &modulo;
	name[4].ope = '%';
	name[5].f = NULL;
	name[5].ope = 0;
	i = 0;
	while (name[i].ope)
	{
		if (name[i].ope == *operateur)
			ft_putnbr(name[i].f(val_1, val_2));
		i++;
	}
}
