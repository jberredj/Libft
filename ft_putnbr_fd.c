/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:48 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 22:37:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int int_len;

	int_len = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n =/ 10;
		int_len++;
	}
	return (int_len);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	us_n;
	char			str[12];
	int				str_len;
	int				str_start;

	ft_bzero(str, 12);
	str_len = ft_intlen(n);
	us_n = (unsigned int)n;
	str_start = (n < 0 ? 1 : 0);
	if (n < 0)
	{
		str[0] = '-';
		us_n = -us_n;
	}
	else
		str_len--;
	while (str_len >= str_start)
	{
		str[str_len--] = (char)(us_n % 10 + '0');
		n /= 10;
	}
	ft_putstr_fd(str, fd);
}
