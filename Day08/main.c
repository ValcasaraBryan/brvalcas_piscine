/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:18:27 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/22 20:55:17 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ex05/ft_stock_par.h"
#include "ex06/ft_stock_par.h"
struct  s_stock_par *ft_param_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
	return (0);
}
