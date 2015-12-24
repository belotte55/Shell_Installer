/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:04:56 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 16:58:31 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc(ft_strlen((char *)str1) + ft_strlen((char *)str2) + 1);
	if (!str)
		return (NULL);
	i = -1;
	j = -1;
	while (str1[++j])
		str[++i] = str1[j];
	j = -1;
	while (str2[++j])
		str[++i] = str2[j];
	str[++i] = '\0';
	return (str);
}
