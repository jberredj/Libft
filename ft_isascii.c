/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:30:40 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/18 16:40:18 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)
	if (uchar_c >= 0 && uchar_c <= 127)
		return (1);
	return (0);
}
