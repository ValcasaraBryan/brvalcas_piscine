/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:38:28 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 11:50:54 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_any(char **tab, int(*f)(char*));

int		tab(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		//printf("%c", str[i]);
		if (str[i] == '1')
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
//	printf("%s\n", argv[1]);
	printf("yeah = %d\n", ft_any(argv, &tab));
	return (0);
}
