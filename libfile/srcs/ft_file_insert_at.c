/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_insert_at.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:34:37 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/02 18:34:04 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		ft_file_insert_at(t_file *file, char *str, int pos)
{
	if (!file)
		return (FALSE);
	if (!file->tmp || !str)
		return (FALSE);
	file->tmp = ft_insert_at(file->tmp, str, pos);
	file->pos += ft_strlen(str);
	return (TRUE);
}
