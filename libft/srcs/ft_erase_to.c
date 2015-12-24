/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase_to.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:48:44 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/04 14:50:46 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_erase_to(const char *s1, const char *subs, int pos)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s1 || !subs)
		return (NULL);
	i = -1;
	j = 0;
	len = ft_strlen((char *)s1);
	if (len < (int)ft_strlen((char *)subs) + pos)
		len = ft_strlen((char *)subs) + pos;
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (++i < pos)
		str[i] = s1[i];
	while (subs[j])
		str[++i] = subs[j++];
	while (++i < len)
		str[i] = s1[i];
	str[++i] = '\0';
	return (str);
}
