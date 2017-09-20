/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <bvalcasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 18:47:54 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/16 19:54:55 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_string(char *str, int *nb_long, int *nb_chariot, int *nb_str)
{
	while (str[*nb_str] != '\0')
	{
		if (str[*nb_str] == '\n')
			*nb_chariot = *nb_chariot + 1;
		else
		{
			if (*nb_chariot == 0)
				*nb_long = *nb_long + 1;
		}
		*nb_str = *nb_str + 1;
	}
}
