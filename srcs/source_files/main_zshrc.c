/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaz <zaz@42.fr>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 07:57:26 by zaz               #+#    #+#             */
/*   Updated: 2015/08/06 13:21:03 by Belotte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	char	*pseudo;

	pseudo = "\"";
	if (ac == 1)
	{
		ft_putstr("Usage: ./custom_zshrc <path_to_zshrc>\n");
		return (1);
	}
	ft_putstr("What's your pseudo ?\n");
	pseudo = ft_strcat(pseudo, ft_getline());
	pseudo = ft_strcat(pseudo, "\"");
	ft_insert_at(av[1], pseudo, 36);
	return (0);
}
