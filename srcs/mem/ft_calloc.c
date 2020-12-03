/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:57:36 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 09:44:37 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
