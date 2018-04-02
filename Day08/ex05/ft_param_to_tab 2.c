/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:43:54 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/26 15:59:29 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*stock;
	int				i;

	i = 0;
	if (!(stock = malloc(sizeof(t_stock_par) * ac + 1)))
		return (NULL);
	while (i < ac)
	{
		stock[i].size_param = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		stock[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char			*str;
	int				i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
