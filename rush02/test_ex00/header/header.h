/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 14:49:04 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/25 20:38:03 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define RUSH_0 0
# define RUSH_1 1
# define RUSH_2 2
# define RUSH_3 3
# define RUSH_4 4
# define RUSH_34 5
# define RUSH_24 6
# define RUSH_234 7
# define ERROR 8
# define BUFFER 65000

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>

void	rush(int x, int y);
int		ft_atoi(char *str);
void	ft_putchar(char c);
int		check_rush(char **str, int x, int y);
void	ft_print_colonne(char *buf);
void	ft_putstr(char *str);
char	*ft_print_line(char *axe_y, int col);
void	ft_print_result(int total, int col, int line);
void	ft_putnbr(int nb);
void	ft_print_crochet(int colle, int col, int line);
int		check_carre(char **str, int x, int y);
int		check_row(char **str, int x);
void	print_rush(int col, int line);

#endif
