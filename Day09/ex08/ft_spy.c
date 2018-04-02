/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:14:09 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 14:54:20 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] == ' ')
		i++;
	while (to_find[j] == str[i + j] || to_find[j] == str[i + j] + 32)
	{
		j++;
		if (to_find[j] == '\0')
		{
			while (str[i + j] == ' ')
				i++;
			if (!str[i + j])
				return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int check;

	i = 1;
	check = 0;
	while (i < argc)
	{
		if (my_strstr(argv[i], "president"))
			check = 1;
		else if (my_strstr(argv[i], "attack"))
			check = 1;
		else if (my_strstr(argv[i], "bauer"))
			check = 1;
		i++;
	}
	if (check)
		write(1, "Alert!!!\n", 9);
	return (0);
}
