/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carre.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 15:58:34 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/17 16:03:47 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nb);


void	ft_carre(int *l, int *c, int *i, int *n)
{
	char a[] = "[carre]";
	char b[] = "[rectangle]";

	if (*l == *c && *l > 0 && *c > 0)
	{
		ft_putstr(a);
		ft_putstr(" [");
		ft_putnbr(*i);
		ft_putstr("] [");
		ft_putnbr(*n);
		ft_putstr("]");
		ft_putstr(" || ");
	}
	if ((*l > *c || *l < *c || *l == *c) &&  (*l > 0 && *c > 0))
	{
		ft_putstr(b);
		ft_putstr(" [");
		ft_putnbr(*i);
		ft_putstr("] [");
		ft_putnbr(*n);
		ft_putstr("]");
	}
}
