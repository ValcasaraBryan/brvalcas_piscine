/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:34:39 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/18 20:40:53 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find == '\0')
		return (str);
	if ((to_find[i] == '\0') && (str[i] == '\0'))
		return (str);
	if (str[i] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	if (str[i + j] != to_find[j])
		return (NULL);
	return (str);
}

int		main(void)
{
	printf("%s\n", ft_strstr("", ""));
	printf("%s\n", strstr("", ""));
	return (0);
}
