/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:07:32 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/29 23:17:26 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_trim_c_len(char *str, char c)
{
	int		i;
	int		len;
	char	*str_;

	if (!str)
		return (0);
	i = -1;
	str_ = ft_strdup(str);
	len = ft_strlen(str_);
	while (str_[++i] == c)
		len--;
	if (len == 0)
		return (0);
	str_ = ft_strrev(str);
	i = -1;
	while (str_[++i] == c)
		len--;
	return (len);
}

char		*ft_strtrim_c(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	*str_;

	if (get_trim_c_len((char *)str, c) == 0)
		return (ft_strdup(""));
	str_ = (char *)malloc(sizeof(char) * (get_trim_c_len((char *)str, c) + 1));
	if (!str_)
		return (NULL);
	i = 0;
	while (str[i] == c)
		i++;
	j = -1;
	k = 0;
	while (str[i])
	{
		if (str[i] != c)
			k = j + 1;
		str_[++j] = str[i++];
	}
	str_[k + 1] = '\0';
	str_ = ft_strdup(str_);
	return (str_);
}
