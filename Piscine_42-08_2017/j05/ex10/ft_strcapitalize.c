/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 03:54:25 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 04:53:57 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_strlowcase(&str[i]);
		while ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 63))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_strupcase(&str[i]);
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(c));
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
	return (0);
}
