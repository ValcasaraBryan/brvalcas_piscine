/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 22:41:48 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/10 02:08:47 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		match(putstr(s1), putstr(s2))
{
	int i;
	char comp[1] = "*";

	i = 0;
	
	
}

int		strcmp(const char *s1, const char *s2)
{
	while(*s1 != *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			return (0);
		return ((* (unsigned char *) s1 < * (unsigned char *) s2) ? : +1);
	}
	return(0);
}



void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char s1[] = "Salut";
	char s2[] = "Sa*u*";
	ft_putstr(s1);
	return (0);
}
