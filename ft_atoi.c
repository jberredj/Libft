/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:40:58 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 19:44:00 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((char)c == ' '
	|| (char)c == '\f'
	|| (char)c == '\n'
	|| (char)c == '\r'
	|| (char)c == '\t'
	|| (char)c == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	unsigned int	digit;
	int				sign;

	while (ft_isspace((const int)*str))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str != '\0' && ft_isdigit((int)*str))
	{
		digit = digit * 10 + (*str - '0');
		str++;
	}
	return ((int)digit * sign);
}
