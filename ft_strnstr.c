/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:33:02 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/24 09:13:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t n_len;

	n_len = ft_strlen(needle);
	if (*needle != '\0')
	{
		while (ft_strncmp(haystack, needle, len) != 0)
		{
			if (n_len > len || *haystack == '\0')
				return (NULL);
			len--;
			haystack++;
		}
	}
	return ((char *)haystack);
}
