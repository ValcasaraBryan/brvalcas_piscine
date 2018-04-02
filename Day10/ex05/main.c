#include <stdio.h>

int     ft_is_sort(int *tab, int length, int(*f)(int, int));

int		tab(int val, int val_plus)
{
	if (val < val_plus)   //  2  <   6
		return (-1);
	if (val == val_plus)
		return (0);
	return (1);
}



int		main(void)
{
	int tab_int[5] = {6, 5, 3, 2, 1}; // decroissant
	int tab_int_[5] = {1, 2, 5, 7, 6}; // pas croissant
	int tab_int_2[5] = {1, 2, 3, 5, 6}; // croissant
	int tab_int_3[5] = {6, 7, 5, 2, 1}; // pas decroissant
	int tab_int_4[2] = {1, 3}; // croissant
	int tab_int_5[2] = {3, 1}; // decroissant

	printf("yeah = %d\n", ft_is_sort(tab_int, 5, &tab));
	printf("yeah = %d\n", ft_is_sort(tab_int_, 5, &tab));
	printf("yeah = %d\n", ft_is_sort(tab_int_2, 5, &tab));
	printf("yeah = %d\n", ft_is_sort(tab_int_3, 5, &tab));
	printf("yeah = %d\n", ft_is_sort(tab_int_4, 2, &tab));
	printf("yeah = %d\n", ft_is_sort(tab_int_5, 2, &tab));
	int i;
	i = -1;
	while(i++ != 2)
		printf("%d\n", tab_int_5[i]);
	return (0);
}
