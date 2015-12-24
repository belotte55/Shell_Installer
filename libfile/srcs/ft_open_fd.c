/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/20 11:35:05 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/20 12:09:24 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

t_file	*ft_open_fd(int fd)
{
	t_file	*file;

	file = (t_file *)malloc(sizeof(t_file));
	if (!file)
		return (NULL);
	file->fd = fd;
	file->access = RW;
	file->pos = 0;
	file->read = ft_file_read;
	file->close = ft_file_close;
	file->move_to = ft_file_move_to;
	file->move_by = ft_file_move_by;
	file->getnc = ft_file_getnc;
	file->insert = ft_file_insert;
	file->insert_at = ft_file_insert_at;
	file->write = ft_file_write;
	file->clear = ft_file_clear;
	return (file);
}
