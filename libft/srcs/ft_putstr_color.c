/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbellott <fbellott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 00:22:35 by fbellott          #+#    #+#             */
/*   Updated: 2015/12/21 00:25:29 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_color(char *s, int color)
{
	ft_putstr("\x1b[");
	ft_putnbr(color);
	ft_putstr("m");
	ft_putstr(s);
	ft_putstr("\x1b[0m");
}
