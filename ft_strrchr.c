/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:55:16 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 13:02:20 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;
	char	*curr_char;

	last_char = NULL;
	curr_char = ft_strchr(s, c);
	while (curr_char != NULL)
	{
		curr_char = ft_strchr(curr_char + 1, c);
		if (curr_char == NULL)
			break ;
		last_char = curr_char;
	}
	return (last_char);
}
