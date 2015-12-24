/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:25:20 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/26 14:10:26 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t			i;
	unsigned char	*str1_;
	unsigned char	*str2_;

	i = -1;
	str1_ = (unsigned char *)str1;
	str2_ = (unsigned char *)str2;
	while (++i < len)
	{
		if (str1_[i] != str2_[i])
			return (str1_[i] - str2_[i]);
	}
	return (0);
}
