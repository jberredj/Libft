/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:06:25 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 11:35:28 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_elem;
	t_list	*prev_elem;
	t_list	*new_elem;

	first_elem = NULL;
	if (lst != NULL)
	{
		if ((first_elem = ft_lstnew(lst_content)) == NULL)
			return (NULL);
		first_elem = (*f)(first);
		prev = first;
		lst = lst->next;
	}
	while (lst != NULL)
	{
		if ((new = ft_lstnew(lst->content)) == NULL)
			return (NULL);
		new = f(new);
		prev->nexr = new;
		lst = lst->next;
	}
	return(first);
}
