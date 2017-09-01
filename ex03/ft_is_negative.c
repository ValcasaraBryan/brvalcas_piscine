/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboilley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 12:01:28 by mboilley          #+#    #+#             */
/*   Updated: 2017/09/01 23:59:22 by mboilley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char n)
{
	write(1,&n,1);
	return(n);
}




	void ft_is_negative(int n)
{
	char result;

	if (n < 0)
	{
		result = 'N';
	}
	else
	{
		result = 'P';
	}
	ft_putchar(result);
}




	int main()
{
ft_is_negative(-151);
return(0);
}
