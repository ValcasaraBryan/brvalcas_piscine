/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:58:19 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 16:04:20 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_generic(void)
{
	int		i;
	char	*c;

	c = "Tut tut ; Tut tut";
	i = 0;
	while (c[i] != '\0')
		ft_putchr(c[i++]);
	ft_putchar('\n');
}
