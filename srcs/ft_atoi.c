/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:55:11 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/28 15:42:22 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		nb;
	char	is_neg;

	nb = 0;
	i = -1;
	is_neg = 0;
	while (str[++i] == ' ' || !ft_isprint(str[i]))
	{
		if (str[i] < 0)
			return (0);
	}
	if (str[i] < 0)
		return (0);
	if (str[i] == '+' || str[i] == '-')
		is_neg = (str[i++] == '-' ? 1 : 0);
	while (ft_isdigit(str[i]))
	{
		nb *= 10;
		nb += str[i++] - '0';
	}
	return ((is_neg ? -nb : nb));
}
