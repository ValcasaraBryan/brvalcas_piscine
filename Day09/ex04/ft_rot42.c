/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 21:28:08 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 14:50:39 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_upcase(char key)
{
	char	*tab;
	char	*tab2;
	int		i;

	i = 0;
	tab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	tab2 = "QRSTUVWXYZABCDEFGHIJKLMNOP";
	while (key != tab[i])
		i++;
	return (tab2[i]);
}

char	ft_lowcase(char key)
{
	char	*tab;
	char	*tab2;
	int		i;

	i = 0;
	tab = "abcdefghijklmnopqrstuvwxyz";
	tab2 = "qrstuvwxyzabcdefghijklmnop";
	while (key != tab[i])
		i++;
	return (tab2[i]);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_lowcase(str[i]);
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ft_upcase(str[i]);
		i++;
	}
	return (str);
}
