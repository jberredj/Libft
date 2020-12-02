/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 13:26:35 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (lst != NULL)
	{
		if ((new_list = ft_lstnew((*f)(lst->context))) == NULL)
			ft_lstclear(new_list, del);
		lst = lst->next;
		while (lst != NULL)
		{
			new_elem = ft_lstnew((*f)(lst->context));
			ft_lstadd_back(&new_list, new_elem);
			lst = lst->next;
		}
	}
	return (new_list);
}
