#include <stdio.h>

int     ft_count_if(char **tab, int(*f)(char*));

int		tab(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '1')
			return (1);
		i++;
	}
	return (0);
}



int		main(int argc, char **argv)
{
	argc = 0;
	printf("yeah = %d\n", ft_count_if(argv, &tab));
	return (0);
}
