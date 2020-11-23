/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:33:02 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 16:58:51 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char*)big);
	i = 0;
	while (big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0' || j == len)
				return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
