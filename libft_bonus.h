/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 08:58:07 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/02 09:04:50 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H
# include <stdlib.h>
# include "libft.h"

typedef struct	s_list
{
	void 		*content;
	struct 		s_list *next;
}				t_list;
t_list			*ft_lstnew(void *content);
#endif
