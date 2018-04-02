#include <unistd.h>
#include <stdlib.h>

void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(int ac, char **av)
{
	char **str;
	ac = 0;
	printf("\nsplits =\n\n");
	ft_print_words_tables(ft_split_whitespaces(av[1]));
	str = ft_split_whitespaces(av[1]);
	ft_sort_wordtab(str);
	printf("\ntriee en ascii = \n\n");
	ft_print_words_tables(str);
	printf("\n");
	return (0);
}
