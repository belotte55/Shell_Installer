/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:41:17 by fbellott          #+#    #+#             */
/*   Updated: 2015/11/30 14:27:52 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_item(const char *str, char c)
{
	int		i;
	int		rows;

	i = -1;
	rows = (str[0] ? 1 : 0);
	while (str[++i])
	{
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
			rows++;
		}
	}
	return (rows);
}

char		**ft_strsplit(char const *str, char c)
{
	int		i;
	int		k;
	int		rows;
	char	*str_;
	char	**array;

	rows = ft_init_var(&i, &k);
	str_ = ft_strreduce(ft_strtrim_c(str, c), c);
	if (!(array = (char **)malloc(sizeof(char *) * (get_nb_item(str_, c) + 1)))
		|| !(array[rows] = (char *)malloc((ft_strlen(str_) + 1))))
		return (NULL);
	while (str_[++i])
	{
		if (str_[i] == c)
		{
			array[rows][++k] = '\0';
			if (!(array[++rows] = (char *)malloc(ft_strlen((str_ + i++)) + 1)))
				return (NULL);
			k = -1;
		}
		array[rows][++k] = str_[i];
	}
	array[rows][++k] = '\0';
	array[(rows == 0 && k == 0 ? rows : rows + 1)] = NULL;
	return (array);
}
