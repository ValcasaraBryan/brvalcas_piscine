/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvalcasa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 12:58:35 by bvalcasa          #+#    #+#             */
/*   Updated: 2017/09/05 01:07:45 by bvalcasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_is_negative(int n)
{
	char result;

	if (n < 0)
	{
		result = 'N';
		ft_putchar(result);
	}
	else
	{
		result = 'P';
		ft_putchar(result);
	}
}
