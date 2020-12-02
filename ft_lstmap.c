/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 14:57:06 by jberredj         ###   ########.fr       */
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
	void	*tmp;

	if (lst == NULL || f == NULL || *f == NULL)
		return (NULL);
	new_elem = NULL;
	if ((new_list = ft_lstnew(lst->content)) != NULL)
	{	
		new_elem = new_list;
		while (lst != NULL)
		{
			if ((tmp = (*f)(lst->content)) == NULL)
				return (ft_lstmap_clean(&new_list, del));
			new_elem->content = tmp;
			lst = lst->next;
			if((new_elem->next = ft_lstnew(lst->content)) == NULL)
				return (ft_lstmap_clean(&new_list, del));
			new_elem = new_elem->next;
		}
	}
	else
		return (ft_lstmap_clean(&new_list, del));
	return (new_list);
}
