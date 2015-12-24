/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:49:00 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/27 11:34:35 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len && src[i])
		dest[i] = src[i];
	i--;
	while (++i < len)
		dest[i] = '\0';
	return (dest);
}
