/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <brvalcas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:35:50 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/25 20:29:36 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/header.h"

int		check_rush(char **str, int x, int y)
{
	if (str[0][0] == 'o')
		return (RUSH_0);
	else if (str[0][0] == '/')
		return (RUSH_1);
	else if (str[0][0] == 'A')
	{
		if (x == 1 && y == 1)
			return (RUSH_234);
		if (x == 1 && y > 1)
		{
			if (str[y - 1][0] == 'A')
				return (RUSH_3);
			else if (str[y - 1][0] == 'C')
				return (RUSH_24);
		}
		if (x > 1 && y == 1)
			return (check_row(str, x));
		if (x > 1 && y > 1)
			return (check_carre(str, x, y));
	}
	return (ERROR);
}

int		check_carre(char **str, int x, int y)
{
	if (str[y - 1][0] == 'C' && str[0][x - 1] == 'A')
		return (RUSH_2);
	if (str[y - 1][0] == 'A' && str[0][x - 1] == 'C')
		return (RUSH_3);
	if (str[y - 1][0] == 'C' && str[0][x - 1] == 'C')
		return (RUSH_4);
	return (ERROR);
}

int		check_row(char **str, int x)
{
	if (str[0][x - 1] == 'A')
		return (RUSH_2);
	else if (str[0][x - 1] == 'C')
		return (RUSH_34);
	return (ERROR);
}

void	print_rush(int col, int line)
{
	ft_print_crochet(2, col, line);
	ft_putstr(" || ");
	ft_print_crochet(3, col, line);
	ft_putstr(" || ");
	ft_print_crochet(4, col, line);
}
