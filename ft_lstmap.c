/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 11:42:59 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*prev_elem;
	t_list	*new_elem;

	new_list = NULL;
	if (lst != NULL)
	{
		if ((new_list = ft_lstnew(lst->content)) == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_list = (*f)(new_list);
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	while (lst != NULL)
	{
		if ((new_elem = ft_lstnew(lst->content)) == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elem = f(new_elem);
		ft_lstadd_back(&new_list, new_elem);
	}
	return(new_list);
}
