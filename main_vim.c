/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaz <zaz@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 07:57:26 by zaz               #+#    #+#             */
/*   Updated: 2015/08/06 15:29:23 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putstr("Usage: ./configure_vim_mail <path_of_file_to_configure>\n");
		return (1);
	}
	ft_putstr("What's your email ?\n");
	ft_insert_at(av[1], ft_getline(), 2133);
	return (0);
}
