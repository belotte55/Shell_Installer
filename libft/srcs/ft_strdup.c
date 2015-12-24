/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:49:23 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/01 22:55:57 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*str_;

	i = -1;
	str_ = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str_)
		return (NULL);
	while (str[++i])
		str_[i] = str[i];
	str_[i] = '\0';
	return (str_);
}
