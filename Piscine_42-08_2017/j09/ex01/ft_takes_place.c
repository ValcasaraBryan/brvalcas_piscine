/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboilley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 23:32:14 by mboilley          #+#    #+#             */
/*   Updated: 2017/09/08 04:03:56 by mboilley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	int		h;

h = hour;
if (hour > 12)
	h = hour % 12;
if (hour == 0)
	h = 12;
printf("THE FOLLOWING TAKES PLACE BETWEEN ");
if (hour < 11)
	printf("%d.00 A.M. AND %d.00 A.M. \n", h, (h = 1) % 12);
if (hour == 11)
	printf("11.00 A.M. AND 12.00 P.M. \n");
if (hour == 23)
	printf("11.00 A.M. AND 12.00 P.M. \n");
if (hour == 24)
	printf("12.00 A.M. AND 1.00 A.M. \n");
else
	printf("%d. 00 P.M. AND %d. 00 P.M.\n", h, (h + 1) % 12);
}

int		main()
{
	ft_takes_place(18);
	return (0);
}
