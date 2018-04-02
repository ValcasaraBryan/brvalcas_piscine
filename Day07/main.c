/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 22:40:16 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/23 00:59:49 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

char    *ft_strdup(char *src);
void	ft_putstr(char *str);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char    *ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int max;
	int max_2;
	int min;
	int min_2;
	int *range;

	i = 0;
	max = 5;
	min = -5;
	max_2 = 5;
	min_2 = -5;
	printf("strdup    = %s\n", strdup(argv[argc - 1]));	
	printf("ft_strdup = %s\n", ft_strdup(argv[argc - 1]));
	while (i < max + (-min))
		printf("ft_range = %d\n", ft_range(min, max)[i++]);

	printf("\n");
	ft_ultimate_range(&range , min_2, max_2);
	i = 0;
	while (i < max_2 + (-min_2))
		printf ("ft_ultimate_range = %d\n", range[i++]);
	printf("\nft_ultimate_range retour = %d\n", ft_ultimate_range(&range , min_2, max_2));
	ft_putchar('\n');
	printf("ft_concat_params =\n$%s$\n", ft_concat_params(argc, argv));
	
	i = -1;
	printf ("\nsplit =\n");
	char **coucou;
	coucou =  ft_split_whitespaces("BwU 	 38hj9Qu  	 ybgnzc5JQAw 		 vQXwyY 		 Fbs4 		 DjYoc0a  	 mPoVbZ7KR");
	while (++i < 12)
		printf("%d = $%s$\n", i, coucou[i]);

	int supp;
	int arg;
	i = 0;
	supp = i;
	arg = 2;	//nombres d'argument a compter uniquement +3 max sinon seg fault
	printf("\narg = '%s'\n", argv[1]);
	printf ("\narg split =\n");
	while (i != arg)
	{
		printf ("%d  = %s\n", i, ft_split_whitespaces(argv[1])[i]);
		i++;
	}
	ft_putchar('\n');
	printf("print_words_tables = \n");
	ft_print_words_tables(ft_split_whitespaces(argv[1]));

	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}
