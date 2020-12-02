/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 15:29:14 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static void	*ft_lstmap_clean(t_list **lst, void *del)
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (lst == NULL || f == NULL)
		return (NULL);
	if ((new_list = ft_lstnew(NULL)) != NULL)
	{
		new_elem = new_list;
		while (lst != NULL)
		{
			if ((new_elem->content = (*f)(lst->content)) == NULL)
				return (ft_lstmap_clean(&new_list, del));
			if ((new_elem->next = ft_lstnew(NULL)) == NULL)
				return (ft_lstmap_clean(&new_list, del));
			lst = lst->next;
			new_elem = new_elem->next;
		}
	}
	return (new_list);
}
