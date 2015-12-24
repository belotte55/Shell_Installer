/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Belotte <fbellott@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 22:12:25 by Belotte           #+#    #+#             */
/*   Updated: 2015/11/29 20:32:30 by fbellott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*prev;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	first = (f)(lst);
	prev = first;
	lst = lst->next;
	while (lst)
	{
		next = f(lst);
		prev->next = next;
		prev = next;
		lst = lst->next;
	}
	prev->next = NULL;
	return (first);
}
