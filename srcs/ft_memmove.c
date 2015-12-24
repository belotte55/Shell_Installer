/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:01:57 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/30 14:23:40 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*buf;

	buf = (unsigned char *)malloc(sizeof(unsigned char) * (len + 1));
	ft_memcpy(buf, src, len);
	ft_memcpy(dest, buf, len);
	free(buf);
	return (dest);
}
