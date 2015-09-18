/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vimrc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 22:37:35 by Belotte           #+#    #+#             */
/*   Updated: 2015/09/17 22:46:27 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr("Usage: ./configure_vimrc_user <path_of_file_to_configure> <path_of_file_with_user>")
		return (1);
	}
	
}
