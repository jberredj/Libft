/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:32:40 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 13:22:24 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H
# include <stdlib.h>
# include "libft.h"

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
#endif
