/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 22:03:53 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/29 20:35:29 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*to_free;

	to_free = *alst;
	while (to_free)
	{
		next = to_free->next;
		del(to_free->content, to_free->content_size);
		free(to_free);
		to_free = NULL;
		to_free = next;
	}
	*alst = NULL;
}
