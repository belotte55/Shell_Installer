/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:22:01 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/27 16:18:38 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*str_;

	i = -1;
	j = ft_strlen((char *)str);
	str_ = (char *)malloc(sizeof(char) * (j + 1));
	str_[j] = '\0';
	while (str[++i])
		str_[--j] = str[i];
	return (str_);
}
