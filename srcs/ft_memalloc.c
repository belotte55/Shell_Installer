/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 22:57:40 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/27 15:04:43 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)malloc(len);
	if (!str)
		return (NULL);
	while (++i < len)
		str[i] = '\0';
	return ((void *)str);
}
