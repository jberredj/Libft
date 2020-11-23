/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:55:51 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/18 15:59:49 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	t_bzero(void *s, size_t n)
{
	unsigned char *uchar_s;

	uchar_s = (unsigned char*)s;
	while (n-- > 0)
		*uchar_s++ = '\0';
}
