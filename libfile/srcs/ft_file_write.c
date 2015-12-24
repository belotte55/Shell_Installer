/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:04:25 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/02 18:39:43 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char	ft_file_write(t_file *file)
{
	if (!file)
		return (FALSE);
	if (write(file->fd, file->tmp, ft_strlen(file->tmp)) == -1)
		return (FALSE);
	return (TRUE);
}
