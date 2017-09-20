/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:12:14 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/19 22:23:49 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i != nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int		main(void)
{
	char s1 [] = "salut";
	char s2 [] = "salutffefefefeef";

	printf("[1] : %s\n", ft_strncat(s1, s2, 7));
	return (0);
}
// elle ne prend en compte que les n premiers caractères de src ; et
// src n'a pas besoin d'octet nul final si elle contient n caractères ou plus.