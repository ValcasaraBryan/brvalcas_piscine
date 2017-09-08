/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 04:32:48 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/08 12:57:13 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int		ft_antidote(int i, int j, int k)
{
	int median_value;
	if  ((j > i && j < k) || (j < i && j > k))
		median_value = j;
	if ((j > i && j > k) || (j < i && j < k))
		median_value = i;
	if ((k < j && k > i) || (k < i && k < j))
		median_value = k;
	return (median_value);
}

int		main(void)
{
	int i;
	int j;
	int k;

	i = 80;
	j = 75;
	k = 25;
	ft_antidote(i, j, k);
	return (0);
}
