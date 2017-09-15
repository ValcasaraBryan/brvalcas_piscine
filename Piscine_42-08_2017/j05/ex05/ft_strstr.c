/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 14:34:39 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 15:20:50 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str['\0'])
	{
		if (to_find[i] == str[i])
		{
			to_find = &str[i++];
			return (to_find);
		}
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char str[] = " je mappelle Bryan Salut bj";
	char to_find[] = "Salut";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return (0);
}