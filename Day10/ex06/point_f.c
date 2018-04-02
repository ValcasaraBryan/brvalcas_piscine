/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:15:12 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 20:34:28 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long int	addition(long int val_1, long int val_2)
{
	return (val_1 + val_2);
}

long int	soustraction(long int val_1, long int val_2)
{
	return (val_1 - val_2);
}

long int	multiplication(long int val_1, long int val_2)
{
	return (val_1 * val_2);
}

long int	division(long int val_1, long int val_2)
{
	return (val_1 / val_2);
}

long int	modulo(long int val_1, long int val_2)
{
	return (val_1 % val_2);
}
