/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:42:00 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 10:54:15 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = -1;
	while (str1[++i] && i < len)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	if (i < len && ft_strlen((char *)str1) != ft_strlen((char *)str2))
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
