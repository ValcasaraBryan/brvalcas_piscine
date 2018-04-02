/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:41:03 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/22 22:05:20 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

char			**ft_split_whitespaces(char *str);

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

void			ft_show_tab(struct s_stock_par *par);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
#endif
