/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:54:34 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/24 11:52:57 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

t_file		*ft_open(char *name, int access)
{
	t_file	*file;

	file = (t_file *)malloc(sizeof(t_file));
	if (!file)
		return (NULL);
	if ((file->fd = open(name, access)) < 0)
		return (NULL);
	file->name = ft_strdup(name);
	file->access = access;
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
	file->len = 0;
	file->nb_of_lines = -1;
	return (file);
}
