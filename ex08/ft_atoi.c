/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 01:17:53 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/07 06:48:26 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_atoi(char *str)
{
	int s;
	int negative;
	int result;

	s = 0;
	negative = 0;
	result = 0;
	while ((str[s] >= 9 && str[s] <= 13) || str[s] == 32)
		s++;
	if (str[s] == '+' || str[s] == '-')
	{
		if (str[s] == '-')
			negative = 1;
		s++;
	}
	while (str[s] >= '0' && str[s] <= '9')
	{
		result = result * 10;
		result += str[s] - '0';
		s++;
	}
	if (negative == 1)
	{
		return (-result);
	}
	else
	{
		return (result);
	}
}

int		main(void)
{
	char c[] = "-40";
	ft_atoi(c);
	printf("%d",ft_atoi(c));
	return (0);
}
