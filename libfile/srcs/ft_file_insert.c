/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:36:04 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/02 18:33:36 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		ft_file_insert(t_file *file, char *str)
{
	if (!file)
		return (FALSE);
	if (!file->tmp || !str)
		return (FALSE);
	file->tmp = ft_insert_at(file->tmp, str, file->pos);
	file->pos += ft_strlen(str);
	return (TRUE);
}
