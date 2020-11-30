/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:48 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 22:00:29 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_shift_str_left(char *str, size_t n)
{
	int i;

	i = 0;
	if (str[0] == '-')
	{
		str++;
		i++;
	}
	while(str[i] == '\0')
		i++;
	ft_memmove(str, &str[i], n - i);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	us_n;
	int				sign;
	char			str[11];
	int				i;

	i = 9;
	sign = 0;
	if (n < 0)
	{
		str[0] = '-';
		us_n = (unsigned int)n;
		us_n = -us_n;
		i--;
	}
	else 
		us_n = (unsigned int)(n);
	while (n > 0)
	{
		str[i--] = (char)(us_n % 10 + '0');
		us_n /= 10;
	}
	ft_shift_str_left(str, 9);
	ft_putstr_fd(str, fd);
}
