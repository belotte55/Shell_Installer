/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 19:23:09 by Belotte           #+#    #+#             */
/*   Updated: 2015/12/09 19:25:10 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size		*ft_size(int width, int height)
{
	t_size	*size;

	size = (t_size *)malloc(sizeof(t_size));
	if (!size)
		return (NULL);
	size->width = width;
	size->height = height;
	return (size);
}
