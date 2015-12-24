/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:54:43 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/23 13:55:12 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_insert_at(const char *str, const char *sub, int pos)
{
	int		i;
	int		j;
	int		k;
	char	*buf;

	i = 0;
	j = 0;
	k = 0;
	if (!str)
		return (ft_strdup((char *)sub));
	if (!sub)
		return (ft_strdup((char *)str));
	buf = (char *)malloc(ft_strlen((char *)str) + ft_strlen((char *)sub) + 1);
	if (pos < 0)
		pos = ft_strlen((char *)str);
	while (i < pos && str[j])
		buf[i++] = str[j++];
	while (sub[k])
		buf[i++] = sub[k++];
	while (str[j])
		buf[i++] = str[j++];
	buf[i] = '\0';
	free((char *)str);
	free((char *)sub);
	return (buf);
}
