/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:48 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 22:13:57 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	int_len;
	
	int_len = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		int_len++;
	}
	return (int_len);
}

static char	*ft_itoa_test(int n , char *str)
{
	unsigned int	us_n;
	int				str_len;
	short			sign;
	
	str_len = ft_intlen(n);
	sign = (n < 0 ? -1 : 1);
	us_n = (unsigned int)n;
	us_n *= sign;
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

void		ft_putnbr_fd(int n, int fd)
{
	char	str[16];
	ft_putstr_fd(ft_itoa_test(n, str), fd);
}
