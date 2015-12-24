/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:57:06 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 22:13:48 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_;

	str_ = (char *)malloc(sizeof(char) * (len + 1));
	if (!str_ || start > ft_strlen((char *)str))
		return (NULL);
	i = -1;
	while (++i < len)
		str_[i] = str[start + i];
	str_[i] = '\0';
	return (str_);
}
