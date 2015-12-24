/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:10:51 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/25 23:22:18 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t len)
{
	size_t	i;
	int		len_;

	i = -1;
	len_ = ft_strlen(dest);
	while (++i < len && src[i])
		dest[len_ + i] = src[i];
	dest[len_ + i] = '\0';
	return (dest);
}
