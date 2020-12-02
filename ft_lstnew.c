/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:54:22 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 13:34:12 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	if ((new = (t_list*)ft_calloc(sizeof(t_list), 1)) == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
