/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:08:19 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 23:11:31 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreduce(const char *str, char c)
{
	int		i;
	int		k;
	char	*str_;

	i = -1;
	k = -1;
	str_ = (char *)malloc(sizeof(char) * (ft_strlen((char *)str) + 1));
	if (!str_)
		return (NULL);
	while (str[++i])
	{
		if ((str[i] == c && str_[k] != c) || str[i] != c || i == 0)
			str_[++k] = str[i];
	}
	str_ = ft_strdup(str_);
	return (str_);
}
