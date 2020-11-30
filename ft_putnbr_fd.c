/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:48 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 21:45:08 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	us_n;
	char			str[11];
	int				i;

	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		us_n = (unsigned int)n;
		us_n = -us_n;
	}
	else 
		us_n = (unsigned int)(n);
	while (n > 0)
	{
		str[i++] = (char)(us_n % 10 + '0');
		us_n /= 10;
	}
	ft_putstr_fd(str, fd);
}
