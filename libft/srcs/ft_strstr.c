/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:45:54 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 17:00:00 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	flag;

	i = -1;
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[++i])
	{
		j = -1;
		flag = TRUE;
		while (str2[++j])
		{
			if (str2[j] != str1[i + j])
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
