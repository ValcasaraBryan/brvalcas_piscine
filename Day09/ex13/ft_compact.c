/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 14:31:36 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 15:38:09 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i_tab;

	i_tab = 0;
	while (i_tab < length)
	{
		if (tab[i_tab] == NULL && i_tab + 1 < length && tab[i_tab + 1] != NULL)
		{
			tab[i_tab] = tab[i_tab + 1];
			tab[i_tab + 1] = NULL;
			i_tab = 0;
		}
		else
			i_tab++;
	}
	i_tab = 0;
	while (tab[i_tab] != NULL)
		i_tab++;
	return (i_tab);
}
