/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 14:22:21 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/13 15:31:02 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				j;
	unsigned int	i;

	j = 0;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (j = s1[i] - s2[i]);
		else if (s2[i] == '\0')
			return (j = s1[i]);
		i++;
	}
	return (0);
}
