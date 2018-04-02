/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 18:27:44 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/11 19:03:48 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	ft_ft(int *nbr);
//void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_atoi(char *str);
void	ft_sort_integer_table(int *tab, int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;
	int a;
	int b;
	int c;
	int d;
	int div;
	int mod;
	int e;
	int f;
	char *string;
	char string_[] = "./3m04fu7kgrucm5vkqy65nxxa";
	int table[11] = {+-3605, -3318, -3299, -0, -2939, -1822, -1289, -1037, 3436, 3544, 308};
	int index;

	i = 0;
	a = 42;
	b = 0;
	c = 12;
	d = 2;
	e = 12;
	f = 2;
	index = 0;
	string = "salut";
	// ft_ft --------------------------------------------
	ft_ft(&i);
	printf("%d", i);
	// swap ---------------------------------------------
	printf("\na = 42\nb = 0");
	ft_swap(&a, &b);
	printf("\na = %d\nb = %d\n", a, b);
	// ft_div_mod ---------------------------------------
	ft_div_mod(c, d, &div, &mod);
	printf("c = %d\nd = %d\ndiv = %d\nmod = %d\n", c, d, div, mod);	
	// ft_ultimate_div_mod ------------------------------
	printf("e = %d\nf = %d\n", e, f);
	ft_ultimate_div_mod(&e, &f);
	printf("e = %d\nf = %d\n", e, f);
	// ft_putstr(char *str) -----------------------------
	ft_putstr(string);
	ft_putchar('\n');
	// ft_strlen(char *str) -----------------------------
	printf("%d\n",ft_strlen(string));
	// *ft_strrev(char *str) ----------------------------
	printf("strrev : %s\n", string_);
	printf("strrev : %s\n", ft_strrev(string_));
	// ft_atoi(char *str) -------------------------------
	printf("atoi 	: %d\n",atoi("+709551615"));
	printf("ft_atoi : %d\n", ft_atoi("+709551615"));	
	// ft_sort_integer_table(int *tab, int size) --------
	int *ptr = &table[0];
	while (index != 11)
	{
		printf("integer_table : %d\n", table[index++]);
    }
	printf("\n");
	ft_sort_integer_table(ptr, 11);
	index = 0;
	while (index != 11)
	{
		printf("integer_table : %d\n", table[index++]);
	}
}
