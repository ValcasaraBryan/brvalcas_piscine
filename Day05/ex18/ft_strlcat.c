/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 20:15:49 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/19 16:01:08 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen_(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_init;
	unsigned int	dest_init;

	i = 0;
	j = 0;
	src_init = ft_strlen_(src);
	dest_init = ft_strlen_(dest);
	while (dest[j] != '\0')
		j++;
	while ((i != dest_init && dest_init >= size)
			|| (i < (size - 1) && dest_init < size))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size > dest_init)
		return (src_init + dest_init);
	if (size >= 1)
		return (src_init + size);
	return (src_init);
}
