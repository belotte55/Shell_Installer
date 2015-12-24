/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:18:16 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/28 21:21:30 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*str_;

	i = -1;
	str_ = (unsigned char *)str;
	while (++i < len)
	{
		if (str_[i] == (unsigned char)c)
			return ((void *)str + i);
	}
	return (NULL);
}
