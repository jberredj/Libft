/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:56:03 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 14:33:46 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cw_sep(char const *s, char sep)
{
	size_t	count;
	short	word;

	if (s == NULL || sep == '\0')
		return (0);
	count = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s != sep)
		{
			if (word == 0)
				count++;
			word = 1;
			s++;
		}
		else
			word = 0;
		s++;
	}
	return (count);
}

static size_t	ft_strlen_sep(const char *str, char sep)
{
	size_t	i;

	i = 0;
	while (*str == sep)
		str++;
	while (str[i] != sep && str[i] != '\0')
		i++;
	return (i);
}

static void		ft_free_split(char **tab, size_t index)
{
	while (index > 0)
	{
		free(tab[index]);
		index--;
	}
	free(tab);
}

char			**ft_split(char const *s, char c)
{
	size_t	tab_size;
	size_t	i;
	size_t	str_len;
	char	**tab;

	if ((s == NULL) ||
		(tab = (char**)malloc(sizeof(char*) * (ft_cw_sep(s, c) + 1))) == NULL)
		return (NULL);
	i = -1;
	tab_size = ft_cw_sep(s, c);
	while (++i < tab_size)
	{
		while (*s == c)
			s++;
		str_len = ft_strlen_sep(s, c);
		if ((tab[i] = ft_substr(s, 0, str_len)) == NULL)
		{
			ft_free_split(tab, i);
			return (NULL);
		}
		s += str_len;
	}
	tab[i] = NULL;
	return (tab);
}
