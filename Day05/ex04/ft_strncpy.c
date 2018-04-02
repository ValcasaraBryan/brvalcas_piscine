/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 20:38:45 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/18 18:19:08 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n >= 1)
	{
		while (src[i] && i < n && n > 0)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
			dest[i++] = '\0';
	}
	return (dest);
}
