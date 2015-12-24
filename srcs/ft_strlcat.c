/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:07:51 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 22:09:41 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	len_;

	i = 0;
	while (dest[i] && i < len)
		i++;
	len_ = i;
	while (src[i - len_] && i < len - 1)
	{
		dest[i] = src[i - len_];
		i++;
	}
	if (len_ < len)
		dest[i++] = '\0';
	return (len_ + ft_strlen((char *)src));
}
