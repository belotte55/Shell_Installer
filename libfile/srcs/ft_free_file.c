/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:22:07 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/24 12:17:26 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

char	ft_free_file(t_file **f)
{
	int	i;

	i = -1;
	if (!*f)
		return (FALSE);
	if ((*f)->name)
		free((*f)->name);
	(*f)->name = NULL;
//	if (f->data)
		free((*f)->data);
	(*f)->data = NULL;
//	if (f->tmp)
		free((*f)->tmp);
	(*f)->tmp = NULL;
	if ((*f)->lines)
	{
		while ((*f)->lines[++i])
		{
//			if (f->lines[i])
				free((*f)->lines[i]);
			(*f)->lines[i] = NULL;
		}
		free((*f)->lines);
		(*f)->lines = NULL;
	}
	free(*f);
	*f = NULL;
	return (TRUE);
}
