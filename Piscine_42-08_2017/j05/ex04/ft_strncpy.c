/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 00:41:10 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 14:32:36 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str_len)
{
	int index;

	index = 0;
	while (str_len[index] != '\0')
	{
		index++;
	}
	return (index);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	//while (n > 0)
	//{
//*src++ = '\0';
	//	n--;
	//}
	return (dest);
}

int		main(void)
{
	char dest[] = "Taputees";
	char src[] = "Sean";
	printf("%s\n", ft_strncpy(dest, src, 15));
	printf("%s\n", strncpy(dest, src, 15));
	return (0);
}