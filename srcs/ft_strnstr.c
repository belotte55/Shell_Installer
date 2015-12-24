/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:45:54 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/30 14:27:41 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char const *str1, char const *str2, size_t len)
{
	int		i;
	int		j;
	int		flag;
	char	*buf;

	i = -1;
	buf = ft_strdup((char *)str1);
	buf[len] = '\0';
	if (str2[0] == '\0')
		return ((char *)str1);
	while (buf[++i])
	{
		ft_assign_var(&flag, &j, TRUE, -1);
		while (str2[++j])
		{
			if (str2[j] != buf[i + j])
			{
				flag = FALSE;
				break ;
			}
		}
		if (flag)
			return ((void *)str1 + i);
	}
	return (NULL);
}
