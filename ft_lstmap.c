/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 13:35:14 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	new_list = NULL;
	new_elem = NULL;
	if (lst != NULL && *f == NULL && f == NULL && del == NULL)
	{
		if ((new_list = ft_lstnew((*f)(lst->content))) == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
		while (lst != NULL)
		{
			if ((new_elem = ft_lstnew((*f)(lst->content))) == NULL)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, new_elem);
			lst = lst->next;
		}
	}
	return (new_list);
}
