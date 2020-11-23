/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:45:06 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 13:01:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	if (uchar_c >= 'A' && uchar_c <= 'Z')
		return ((int)(uchar_c + 0x20));
	return ((int)uchar_c);
}
