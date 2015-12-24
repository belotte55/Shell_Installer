/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:07:32 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/04 15:02:17 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_trim_len(char *str)
{
	int		i;
	int		len;
	char	*str_;

	if (!str)
		return (0);
	i = -1;
	str_ = ft_strdup(str);
	len = ft_strlen(str_);
	while (str_[++i] == ' ' || str_[i] == '\n' || str_[i] == '\t')
		len--;
	if (len == 0)
		return (0);
	str_ = ft_strrev(str);
	i = -1;
	while (str_[++i] == ' ' || str_[i] == '\n' || str_[i] == '\t')
		len--;
	return (len);
}

char		*ft_strtrim(char const *str)
{
	int		i;
	int		j;
	int		k;
	char	*str_;

	if (get_trim_len((char *)str) == 0)
		return (ft_strdup(""));
	str_ = (char *)malloc(sizeof(char) * (get_trim_len((char *)str) + 1));
	if (!str_)
		return (NULL);
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	j = -1;
	k = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			k = j + 1;
		str_[++j] = str[i++];
	}
	str_[k + 1] = '\0';
	str_ = ft_strdup(str_);
	return (str_);
}
