/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 23:28:04 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 19:19:26 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	if (length < 1)
		return (0);
	j = length - 1;
	while (tab[i] && tab[j] && ((i++ < length) && (--j > 0)))
		if (f(tab[i - 1], tab[i]) < 0 && f(tab[j + 1], tab[j]) < 0)
			return (0);
	return (1);
}
