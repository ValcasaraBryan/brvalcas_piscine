/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 00:41:10 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/15 02:52:48 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *swap;

	i = 0;
	while ()
	{
		swap = &src[n];
		dest = swap;
		//ft_putchar(*dest);
		i++;
	}
	return (dest);
}

int		main(void)
{
	printf("%s\n", ft_strncpy("salut","Taputeestenstring", 9));
	return (0);
}