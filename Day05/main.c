/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 14:33:36 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/19 16:15:17 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_putnbr(int nb);
int		ft_atoi(char *str);
void    ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char a[6] = "  cou";
	char b[6] = "salut";
	char c[6] = "  cou";
	char d[6] = "salut";
	
	char g[25] = "coucou"; // dest
	char f[] = "je v"; // src
	char e[25] = "coucou"; // dest
	char h[] = "je v"; // src
	
	unsigned int i = 15;
	unsigned int j = 15;
	ft_putstr("Salut");
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(9);
	ft_putchar('\n');
	ft_putnbr(999);
	ft_putchar('\n');
	ft_putnbr(-9);
	ft_putchar('\n');
	ft_putnbr(-999);
	ft_putchar('\n');
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf ("%d\n", atoi("     -99"));
	printf ("%d\n", atoi("     --99"));
	printf ("%d\n", atoi("     ++99"));
	printf ("%d\n", atoi("     +99"));
	printf ("%d\n", ft_atoi("     -99"));
	printf ("%d\n", ft_atoi("     --99"));
	printf ("%d\n", ft_atoi("     ++99"));
	printf ("%d\n", ft_atoi("     +99"));
	
	printf ("a source = -%s-\nc source = -%s-\n", a, c);
	printf ("b source = -%s-\nd source = -%s-\n", b, d);
	printf ("a        = -%s-\na retour = -%s-\n", a, strcpy(a, b));
	printf ("c        = -%s-\nc retour = -%s-\n\n", a, ft_strcpy(c, d));
	
	printf ("g source = -%s-\ne source = -%s-\n", g, e);
	printf ("f source = -%s-\nh source = -%s-\n", f, h);
	printf ("g        = -%s-\ng retour = -%s-\n", g, strncpy(g, f, i));
	printf ("e        = -%s-\ne retour = -%s-\n\n", e, ft_strncpy(e, h, j));

	char botte_de_foin[] = "f";
	char aiguille[] = "fffff";
	printf ("botte de foin     = %s\naiguille          = %s\n", botte_de_foin, aiguille);
	printf ("ft_strstr renvoi  = %s\n", ft_strstr(botte_de_foin, aiguille));
	printf ("strstr    renvoi  = %s\n\n", strstr(botte_de_foin, aiguille));

	char s2[] = "Salut ";
	char s1[] = "Salut  ";
	printf ("result = %d\n", strcmp(s1, s2));
	printf ("result = %d\n\n", ft_strcmp(s1, s2));
	
	printf ("result = %d\n", strncmp(s1, s2, i));
	printf ("result = %d\n\n", ft_strncmp(s1, s2, i));

	char salut[] = "SALUT, COMMENT tu vas ? 42mots quarante-deux; cinquante+et+un";
	char salut_2[] = "WypEuGsuljwWGERHerhrwhhrwhWRGWFWFdfef";
	printf ("upcase     = %s\n", ft_strupcase(salut));
	printf ("lowcase    = %s\n", ft_strlowcase(salut));
	printf ("capitalize = %s\n\n", ft_strcapitalize(salut_2));
	printf ("capitalize = %s\n\n", ft_strcapitalize(salut));

	char alpha_only[] = "AbCdE";
	char not_alpha_[] = "12356";
	char mix_alpha_[] = {'A', 'b', 'C', '5', '&', 9, 10, 11, 12};
	char no_char_in[] = "";
	printf ("alpha_only = %d\n", ft_str_is_alpha(alpha_only));
	printf ("not_alpha_ = %d\n", ft_str_is_alpha(not_alpha_));
	printf ("mix_alpha_ = %d\n", ft_str_is_alpha(mix_alpha_));
	printf ("no_char_in = %d\n\n", ft_str_is_alpha(no_char_in));

	printf ("_numeric__ = %d\n", ft_str_is_numeric(not_alpha_));
	printf ("alpha_only = %d\n", ft_str_is_numeric(alpha_only));
	printf ("mix_alpha_ = %d\n", ft_str_is_numeric(mix_alpha_));
	printf ("no_char_in = %d\n\n", ft_str_is_numeric(no_char_in));
	

	char minusc_[] = "assfgjj";
	printf ("minusc_    = %d\n", ft_str_is_lowercase(minusc_));
	printf ("not_alpha_ = %d\n", ft_str_is_lowercase(not_alpha_));
	printf ("mix_alpha_ = %d\n", ft_str_is_lowercase(mix_alpha_));
	printf ("no_char_in = %d\n\n", ft_str_is_lowercase(no_char_in));

	char majusc_[] = "ASDGHJFD";
    printf ("majusc_    = %d\n", ft_str_is_uppercase(majusc_));
    printf ("not_alpha_ = %d\n", ft_str_is_uppercase(not_alpha_));
    printf ("mix_alpha_ = %d\n", ft_str_is_uppercase(mix_alpha_));
    printf ("no_char_in = %d\n\n", ft_str_is_uppercase(no_char_in));
	
	char no_print[5] = {9, 10, 11, 12} ;
	printf ("no_print   = %d\n", ft_str_is_printable(no_print));
	printf ("alpha_only = %d\n", ft_str_is_printable(alpha_only));
	printf ("not_alpha_ = %d\n", ft_str_is_printable(not_alpha_));
	printf ("mix_alpha_ = %d\n", ft_str_is_printable(mix_alpha_));
	printf ("no_char_in = %d\n\n", ft_str_is_printable(no_char_in));

	char test_[] = "j'ai 22ans";
	char resu_[25] = "bonjour ";
	char resu_2[25] = "bonjour ";
	printf ("strcat    = %s\n", strcat(resu_2, test_));
	printf ("ft_strcat = %s\n\n", ft_strcat(resu_, test_));
	
	char test_2[] = "j'ai 22ans et je pue des pied";
	char resu_3[100] = "bonjour je m'appel bryan et ";
	char resu_4[100] = "bonjour je m'appel bryan et ";
	int printemps = 10;
	printf ("strncat    = %s\n", strncat(resu_3, test_2, printemps));
	printf ("ft_strncat = %s\n\n", ft_strncat(resu_4, test_2, printemps));


	char test_3[] = "Je vais bien merci"; // src 19
	char resu_5 [100] = "Salut comment vas tu ? "; // dest 23
	char resu_6 [100] = "Salut comment vas tu ? "; // dest 23 
	int unsigned aout = 41; // max 42
	printf ("strlcat    = %lu\n", strlcat(resu_5, test_3, aout));
	printf ("ft_strlcat = %u\n\n", ft_strlcat(resu_6, test_3, aout));
	printf ("src strlcat     = %s\ndest strlcat    = %s-\n", test_3, resu_5);
	printf ("src ft_strlcat  = %s\ndest ft_strlcat = %s-\n\n", test_3, resu_6);

	char test_5[] = "bonjo";
	char test_6[] = "bonjo";
	char resu_7[] = "salut   ";
	char resu_8[] = "salut   ";
	unsigned int bouh = 9;
	unsigned int bouh_ = 9;
	printf ("	avant\nsrc              = %s\ndest             = %s\n", test_5, resu_7);
	printf ("strlcpy          = %lu\n", strlcpy(resu_7, test_5, bouh));
	printf ("	apres\nsrc              = %s\ndest             = %s\n\n", test_5, resu_7);	

	printf ("	avant\nsrc              = %s\ndest             = %s\n", test_6, resu_8);
	printf ("ft_strlcpy       = %u\n", ft_strlcpy(resu_8, test_6, bouh_));
	printf ("	apres\nsrc              = %s\ndest             = %s\n\n", test_6, resu_8);


	return (0);
}
