/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_close.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:13:53 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/01 20:44:05 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char		ft_file_close(t_file *file)
{
	if (!file)
		return (FALSE);
	if (close(file->fd))
		return (FALSE);
	file->fd = 0;
	return (TRUE);
}
