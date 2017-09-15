/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 22:43:26 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 00:39:46 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	char *swap;

	i = 0;
	while (src[i] != '\0')
	{
		swap = src;
		dest = swap;
		i++;
	}
	return (dest);
}

int		main(void)
{
	printf("%s\n", ft_strcpy("salut","sa"));
	return (0);
}