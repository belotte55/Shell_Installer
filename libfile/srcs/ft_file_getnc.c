/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_getnc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:16:05 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/01 22:03:00 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		*ft_file_getnc(t_file *file, int n)
{
	char	*str;

	if (!file)
		return (NULL);
	str = ft_strndup(file->tmp + file->pos, n);
	ft_file_move_by(file, n);
	return (str);
}
