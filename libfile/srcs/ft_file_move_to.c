/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_move_to.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 00:11:24 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/02 15:08:31 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		ft_file_move_to(t_file *file, int pos)
{
	if (!file)
		return (FALSE);
	if (pos == -1)
		file->pos = ft_strlen(file->tmp);
	else if (pos < 0)
		file->pos = 0;
	else if (pos > (int)ft_strlen(file->tmp))
		pos = ft_strlen(file->tmp);
	else
		file->pos = pos;
	return (TRUE);
}
