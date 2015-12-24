/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:20:51 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/30 14:27:28 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	int		n_;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_assign_var(&i, &n_, 0, n);
	while (n_ > 0 && ++i)
		n_ /= 10;
	str = (char *)malloc(sizeof(char) * (i + 1 + (n >= 0 ? 0 : 1)));
	if (!str)
		return (NULL);
	ft_assign_var(&i, &n_, -1, n);
	while (ft_getabs(n_) > 0)
	{
		str[++i] = ft_getabs(n_) % 10 + '0';
		n_ /= 10;
	}
	str[++i] = ft_getabs(n_) % 10 + '0';
	str[i] = '\0';
	if (n > 0)
		return (ft_strrev(str));
	return (ft_strjoin("-", ft_strrev(str)));
}
