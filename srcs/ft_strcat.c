/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:10:51 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/25 23:21:33 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	int		len;

	i = -1;
	len = ft_strlen(dest);
	while (src[++i])
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
