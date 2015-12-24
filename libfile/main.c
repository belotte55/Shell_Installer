/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 13:41:50 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/24 12:18:30 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfile.h"

int	main(int ac, char **av)
{
	t_file	*file;

	if (ac != 2)
		return (1);
	file = ft_open(av[1], R);
	if (!file)
		return (1);
	if (!file->read(&file, TRUE))
		return (1);
	ft_free_file(&file);
//	ft_putstr_color(file->data, RED);
//	ft_putstr_color(file->data, BLUE);
	while (TRUE);
	return (0);
}
