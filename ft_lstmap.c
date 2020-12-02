/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 22:12:58 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

static void	*ft_lstmap_clean(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (lst == NULL || f == NULL || *f == NULL)
		return (NULL);
	if ((new_list = ft_lstnew(NULL)) != NULL)
	{
		new_elem = new_list;
		while (lst->next != NULL)
		{
			if ((new_elem->content = (*f)(lst->content)) == NULL)
				return (ft_lstmap_clean(&new_list, (*del)));
			if ((new_elem->next = ft_lstnew(NULL)) == NULL)
			{
				del(new_elem->content);
				return (ft_lstmap_clean(&new_list, (*del)));
			}
			new_elem = new_elem->next;
			lst = lst->next;
		}
	}
	return (new_list);
}
