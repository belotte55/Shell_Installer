/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:17:31 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/01 18:04:13 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(char *str, int n)
{
	int		i;
	char	*str_;

	i = 0;
	str_ = (char *)malloc(sizeof(char) * (n + 1));
	if (!str_)
		return (NULL);
	while (str[i] && i < n)
	{
		str_[i] = str[i];
		i++;
	}
	str_[i] = '\0';
	return (str_);
}
