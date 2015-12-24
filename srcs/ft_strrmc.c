/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:18:08 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/08 17:59:18 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrmc(const char *str, char c)
{
	int		i;
	int		k;
	char	*str_;

	i = -1;
	k = -1;
	str_ = (char *)malloc(sizeof(char) * ft_strlen((char *)str) + 1);
	if (!str_)
		return (NULL);
	while (str[++i])
	{
		if ((str[i] != c))
			str_[++k] = str[i];
	}
	return (ft_strdup(str_));
}
