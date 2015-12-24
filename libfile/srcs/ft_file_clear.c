/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:28:55 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/01 22:40:45 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char	ft_file_clear(t_file *file)
{
	t_file	*f;

	if (!file)
		return (FALSE);
	file->close(file);
	f = ft_open(file->name, T);
	if (!f)
		return (FALSE);
	f->close(f);
	f = ft_open(file->name, file->access);
	if (!f)
		return (FALSE);
	file->fd = f->fd;
	free(f);
	return (TRUE);
}
