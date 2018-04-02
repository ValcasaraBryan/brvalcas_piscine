/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:55:00 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/21 19:22:38 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_putstr_2(char *str);
void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr_2(tab[i++]);
		ft_putchar('\n');
	}
}

void	ft_putstr_2(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
