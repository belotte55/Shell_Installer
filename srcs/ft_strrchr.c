/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:40:44 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/25 23:22:38 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str);
	if ((char)c == '\0')
		return ((char *)str + i);
	while (str[--i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
