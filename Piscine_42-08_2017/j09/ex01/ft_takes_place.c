/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:32:14 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/08 00:07:08 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
