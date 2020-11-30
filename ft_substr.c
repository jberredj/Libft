/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:16:21 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 09:44:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*str;

	if (s == NULL || start >= ft_strlen(s))
		return (NULL);
	s_len = ft_strlen(&s[start]);
	if (s_len < len)
		len = s_len;
	str = ft_calloc(sizeof(char), len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
