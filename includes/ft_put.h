/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:48:04 by jberredj          #+#    #+#             */
/*   Updated: 2020/12/03 09:53:47 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUT_H
# define FT_PUT_H
# include <unistd.h>
# include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
