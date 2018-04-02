/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 17:05:54 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/14 22:10:07 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = ft_strlen(src);
	j = 0;
	while (j <= (i + 1))
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
