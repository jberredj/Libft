/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:01:31 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 09:46:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uchar_s;

	uchar_s = (unsigned char*)s;
	while (n-- > 0)
		if (*uchar_s++ == (unsigned char)c)
			return (--uchar_s);
	return (NULL);
}
