/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_grid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 21:20:10 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/18 18:46:51 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_display_grid(char **grid)
{
	int		i;

	i = -1;
	while (grid[++i])
		ft_putendl(grid[i]);
	return ;
}