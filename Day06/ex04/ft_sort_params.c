/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 16:01:38 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/19 23:46:52 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (j = s1[i] - s2[i]);
		else if (s2[i] == '\0')
			return (j = s1[i]);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		limit;
	char	*rev;

	i = 1;
	limit = argc - 1;
	while (i < argc)
	{
		j = 1;
		while (++j <= limit)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) > 0)
			{
				rev = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = rev;
			}
		}
		i++;
	}
	i = 1;
	while (i <= limit)
		ft_putstr(argv[i++]);
	return (0);
}
