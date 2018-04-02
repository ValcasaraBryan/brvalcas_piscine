/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:26:09 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/22 16:52:25 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int		ft_white_space(char *str);
char	*ft_strcpy(char *str, int lenght);
int		ft_strlen_(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		index;
	int		i;
	int		j;
	int		total;
	char	**av;

	i = 0;
	j = 0;
	index = 0;
	total = ft_strlen_(str);
	if (!(av = (char **)malloc(sizeof(char*) * ft_white_space(str) + 1)))
		return (NULL);
	while (i <= total)
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (str[j] && j < i)
			av[index++] = ft_strcpy(str + j, (i - j));
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
	}
	av[index] = 0;
	return (av);
}

int		ft_white_space(char *str)
{
	int j;
	int lenght;
	int	mot;

	j = 0;
	lenght = 0;
	mot = 0;
	if (!str)
		return (0);
	while (str[lenght] != '\0')
	{
		if (str[lenght] == ' ' || str[lenght] == '\t' || str[lenght] == '\n')
		{
			j++;
			if (str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
				mot++;
		}
		lenght++;
	}
	if (mot == 0)
		return (0);
	if (j < mot)
		return (mot - j);
	return (mot + 1);
}

char	*ft_strcpy(char *str, int lenght)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	if (lenght >= 1)
	{
		while (i < lenght)
		{
			dest[j] = str[i];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

int		ft_strlen_(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
