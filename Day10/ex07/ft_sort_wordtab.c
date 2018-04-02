/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:03:13 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 11:58:24 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (j = s1[i] - s2[i]);
		else if (s2[i] == '\0')
			return (j = s1[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		limit;
	int		j;
	int		i;
	char	*rev;

	i = 1;
	limit = 0;
	while (tab[limit])
		limit++;
	while (i <= limit)
	{
		j = 0;
		while (++j < limit)
		{
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
			{
				rev = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = rev;
			}
		}
		i++;
	}
}
