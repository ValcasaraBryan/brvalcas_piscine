/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 10:47:16 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 21:24:15 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (check_operator(ft_atoi(argv[3]), argv[2]))
			return (0);
		do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]);
	}
	else
		ft_putnbr(0);
	ft_putchar('\n');
	return (0);
}
