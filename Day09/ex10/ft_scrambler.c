/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 15:00:53 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/16 15:01:06 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;

	tmp = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = tmp;
}
