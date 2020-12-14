/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:55:32 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/14 18:02:35 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char		*ft_itoa(int n)
{
	unsigned int	us_n;
	int				str_len;
	char			*str;
	short			sign;

	str_len = ft_intlen(n);
	sign = (n < 0 ? -1 : 1);
	us_n = (unsigned int)n;
	us_n *= sign;
	if ((str = (char*)ft_calloc(sizeof(char), (str_len + 1))) == NULL)
		return (NULL);
	ft_bzero(str, str_len + 1);
	str_len--;
	while (str_len >= 0)
	{
		str[str_len] = us_n % 10 + '0';
		us_n = us_n / 10;
		str_len--;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
