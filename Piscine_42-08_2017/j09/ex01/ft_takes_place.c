/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboilley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:32:14 by mboilley          #+#    #+#             */
/*   Updated: 2017/09/08 00:07:08 by mboilley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int		ft_2412(int hour)
{
	return (hour % 12) == 0 ? 12 : (hour % 12);
}

void	ft_takes_place(int hour)
{
	int x;
	int y;
	char bat;
	char out;
	
	x = ft_2412(hour);
	y = ft_2412(hour + 1);
	bat = ((hour) > 12) ? 'P' : 'A';
	out = ((hour + 1)  % 25 > 12) ? 'P' : 'A';
	write (1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	printf ("%d.00 %c.M AND %d.00 %c.M.\n", hour, bat, y, out);
}

int		main(void)
{
	int hour;
	hour = 18;
	ft_takes_place(hour);
	return (0);
}

