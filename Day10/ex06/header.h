/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 11:31:07 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 20:46:22 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# define MODULO		"Stop : modulo by zero\n"
# define DIVISION	"Stop : division by zero\n"
# define ZERO		"0\n"
# define TRUE		1
# define FALSE		0

typedef	struct		s_operateur
{
	char			ope;
	long int		(*f)(long int, long int);
}					t_opera;

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
void				ft_putnbr(long int nb);
void				ft_putchar(char c);
void				ft_putstr(char *str);
long int			ft_atoi(char *str);
long int			addition(long int val_1, long int val_2);
long int			soustraction(long int val_1, long int val_2);
long int			multiplication(long int val_1, long int val_2);
long int			division(long int val_1, long int val_2);
long int			modulo(long int val_1, long int val_2);
void				do_op(long int val_1, long int val_2, char *operateur);
int					check_operator(int val_2, char *operateur);

#endif
