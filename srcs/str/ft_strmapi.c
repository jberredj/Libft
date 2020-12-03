/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:44:05 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 10:37:58 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			str_len;

	str = NULL;
	if (s != NULL && f != NULL)
	{
		str_len = ft_strlen(s);
		if ((str = (char*)ft_calloc(sizeof(char), (str_len + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
