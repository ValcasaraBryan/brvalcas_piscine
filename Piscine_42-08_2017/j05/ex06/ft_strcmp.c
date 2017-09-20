/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:27:19 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 22:19:44 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int s3;

	i = 0;
	j = 0;
	s3 = 0;
	if (!s2[j])
		return (s1[i]);
	if (!s1[i])
		return (-s2[j]);
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (s1[i] != s2[j])
		{
			if (s1[i] > s2[i])
				s3 = s1[i] - s2[j];
			else if (s1[i] < s2[j])
				s3 = s1[i] - s2[j];
			return (s3);
		}
	}
	return (s1[i] - s2[j]);
}

int		main(void)
{
	printf("%d\n", ft_strcmp("salutkffmwSalut", ""));
	printf("%d\n", strcmp("salutkffmwSalut", ""));
	return (0);
}
