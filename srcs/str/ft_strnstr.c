/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:33:02 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 10:39:54 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		found;
	size_t	i_len;

	i_len = len;
	found = -1;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack != '\0'
	&& (found = ft_strncmp(haystack, needle, ft_strlen(needle))) != 0
	&& len-- > 1)
		haystack++;
	if (i_len - len + ft_strlen(needle) > i_len)
		return (NULL);
	if (found == 0)
		return ((char*)haystack);
	return (NULL);
}
