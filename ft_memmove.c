/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:44:19 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 13:04:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*uchar_dest;
	unsigned char	*uchar_src;

	uchar_dest = (unsigned char*)dest;
	uchar_src = (unsigned char*)src;
	if (uchar_dest < uchar_src)
	{
		while (n-- > 0)
			*uchar_dest++ = *uchar_src++;
	}
	else
	{
		uchar_dest += n - 1;
		uchar_src += n - 1;
		while (n-- > 0)
			*uchar_dest-- = *uchar_src--;
	}
	return (dest);
}
