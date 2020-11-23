/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:57:36 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/23 16:52:43 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	if (nmemb == 0 || size == 1)
	{
		nmemb = 1;
		size = 1;
	}	

	ptr = malloc(nmemb * size);
	if (ptr != NULL) ft_bzero(ptr, nmemb * size);

	return (ptr);
}
