/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 16:32:54 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 11:47:17 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_foreach(int *tab, int length, void(*f)(int));

void	modif(int c)
{
	c = c + 1;
	printf("%d\n", c);
}
int		main(void)
{
	int	i[10] = {10, 51, 51, 56, 85, 12, 75, 59, 51, 10};
	ft_foreach(i, 10, &modif);	
	return (0);
}
