/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:05:48 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 20:30:10 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	us_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		us_n = -n;
	}
	else 
		us_n = (unsigned int)n;
	if (us_n >= 10)
	{
		ft_putnbr_fd(us_n / 10, fd);
		ft_putnbr_fd(us_n % 10, fd);
	} 
	else
		ft_putchar_fd(n + '0', fd);
}
