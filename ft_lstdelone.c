/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:51:17 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 11:25:49 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
		if (lst == NULL)
			return ;
		if (del != NULL && lst->content)
		{
			del(lst->content);
		}
		free(lst);
		lst = NULL;
}

