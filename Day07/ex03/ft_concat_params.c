/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 23:48:46 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/23 00:55:39 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		ft_lenth_str(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tab;
	int		total;
	int		index;

	index = 0;
	j = 0;
	total = ft_lenth_str(argc, argv);
	tab = (char *)malloc(sizeof(*argv) * (total + 1));
	if (tab == NULL)
		return (NULL);
	while (argv[++j] != '\0')
	{
		i = -1;
		while (argv[j][++i] != '\0')
		{
			tab[index] = argv[j][i];
			index++;
		}
		tab[index++] = '\n';
	}
	tab[index - 1] = '\0';
	return (tab);
}

int		ft_lenth_str(int argc, char **argv)
{
	int i;
	int j;
	int lenth;

	argc = 0;
	j = 0;
	lenth = 0;
	while (argv[j] != '\0')
	{
		i = 0;
		while (argv[j][i] != '\0')
			i++;
		lenth += i + 1;
		j++;
	}
	return (lenth);
}
