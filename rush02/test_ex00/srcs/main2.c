/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:53:58 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/25 21:15:39 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/header.h"

char	*ft_print_line(char *axe_y, int line)
{
	char	*axe_x;
	int		i;

	i = -1;
	if (!(axe_x = (char*)malloc(line + 1)))
		return (NULL);
	while (++i < line)
		axe_x[i] = axe_y[i];
	axe_x[i] = 0;
	return (axe_x);
}

void	ft_print_colonne(char *buf)
{
	int		col;
	int		line;
	int		i;
	char	**axe_y;

	line = 0;
	col = 0;
	i = -1;
	while (buf[line] != '\n')
		line++;
	while (buf[++i])
		if (buf[i] == '\n')
			col++;
	if (col <= 0 || line <= 0)
	{
		ft_putstr("Ai-je une chance d'avoir plus de 0 ?\n");
		return ;
	}
	if (!(axe_y = (char **)malloc(sizeof(char*) * (col + 1))))
		return ;
	i = -1;
	while (++i < col)
		axe_y[i] = ft_print_line(buf + i * (line + 1), line);
//	int y = -1;
//	while (++y != 20)
//		printf("%s\n", axe_y[y]);
	ft_print_result(check_rush(axe_y, line, col), line, col);
	free(axe_y);
}

void	ft_print_crochet(int colle, int col, int line)
{
	ft_putstr("[colle-0");
	ft_putnbr(colle);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(line);
	ft_putstr("]");
}

void	ft_print_result(int total, int col, int line)
{
	if (total < 5)
		ft_print_crochet(total, col, line);
	else if (total >= 5 && total < 8)
	{
		if (total == 5)
		{
			ft_print_crochet(3, col, line);
			ft_putstr(" || ");
			ft_print_crochet(4, col, line);
		}
		else if (total == 6)
		{
			ft_print_crochet(2, col, line);
			ft_putstr(" || ");
			ft_print_crochet(4, col, line);
		}
		else
			print_rush(col, line);
	}
	else
		ft_putstr("Ai-je une chance d'avoir plus de 0 ?");
	ft_putchar('\n');
}

int		main(void)
{
	char	buf[BUFFER + 1];
	int		ret;

	ret = read(0, buf, BUFFER + 1);
	buf[ret] = '\0';
	ft_print_colonne(buf);
	return (0);
}
