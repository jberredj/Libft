/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:14:24 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 21:06:46 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	str = NULL;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	ft_strlcpy(str, s, len + 1);
	return (str);
}
