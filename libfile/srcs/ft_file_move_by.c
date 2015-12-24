/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_move_by.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:26:28 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/02 15:08:06 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		ft_file_move_by(t_file *file, int n)
{
	if (!file)
		return (FALSE);
	file->pos += n;
	if (file->pos < 0)
		file->pos = 0;
	if (file->pos > (int)ft_strlen(file->data))
		file->pos = ft_strlen(file->data);
	return (TRUE);
}
