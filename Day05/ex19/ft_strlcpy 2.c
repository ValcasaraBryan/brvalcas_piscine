/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 21:21:55 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/18 01:13:53 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen_2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (size <= 0)
		return (ft_strlen_2(src));
	while (src[j] != '\0')
		j++;
	while (i + 2 <= size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
