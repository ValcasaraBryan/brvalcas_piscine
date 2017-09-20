/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 21:11:57 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 22:25:08 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;
	int s3;

	i = 0;
	j = 0;
	s3 = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[j])
	{
		i++;
		j++;
		if (i == n && j == n)
			return (0);
		if (s1[i] != s2[j])
		{
			if (s1[i] > s2[i])
				s3 = s1[i] - s2[j];
			else if (s1[i] < s2[i])
				s3 = s1[i] - s2[j];
			return (s3);
		}
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_strncmp("Salutk", "Saluta", 6));
	printf("%d\n", strncmp("Salutk", "Saluta", 6));
	return (0);
}
