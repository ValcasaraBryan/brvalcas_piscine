/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 04:56:07 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 11:15:33 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'Z')
			if (str[i] < 'A' || str[i] > 'z')
				return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char c[] = "";
	printf("%d",ft_str_is_alpha(c));
	return (0);
}