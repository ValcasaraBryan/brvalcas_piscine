/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 19:18:52 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/17 16:00:05 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUFF_SIZE 1024

void	ft_carre(int *l, int *c, int *i, int *n);
void	ft_string(char *str, int *nb_long, int *nb_chariot, int *nb_str);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char buf[BUFF_SIZE + 1];
	int rc = read(0, buf, BUFF_SIZE);
	buf[rc + 1] = '\0';
	int i = 0;
	int n = 0;
	int t = 0;


	int l = 5; // Lignes qui definis si c'est un rectangle ou/et 
			   // carre, pour ft_carre(int *l, int *c, int *i, int *n);

	int c = 8; // Colonnes qui definis si c'est un rectangle ou/et 
			   // carre, pour ft_carre(int *l, int *c, int *i, int *n);

	ft_string(buf, &i, &n, &t);
	printf("%d\n%s",rc ,buf);
	printf("nb_long = %d\nnb_chariot = %d\nnb_str = %d\n", i, n, t);
	ft_carre (&l, &c, &i, &n);
	close (0);
	return (0);
}