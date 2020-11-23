/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:45:06 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 13:01:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	if (uchar_c >= 'a' && uchar_c <= 'z')
		return ((int)(uchar_c - 0x20));
	return ((int)uchar_c);
}
