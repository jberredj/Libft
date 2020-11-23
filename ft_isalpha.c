/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:30:40 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 12:59:55 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uchar_c;

	uchar_c = (unsigned char)c;
	if ((uchar_c >= 'a' && uchar_c <= 'z')
	|| (uchar_c >= 'A' && uchar_c <= 'Z'))
		return (1);
	return (0);
}
