/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:56:03 by jberredj          #+#    #+#             */
/*   Updated: 2020/11/30 15:32:06 by jberredj         ###   ########.fr       */
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

static void		*ft_free_split(char **tab, size_t index)
{
	size_t i;

	i = 0;
	while (i < index)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t	tab_size;
	size_t	i;
	size_t	str_len;
	char	**tab;

	if ((s == NULL) || c == '\0' ||
		(tab = (char**)malloc(sizeof(char*) * (ft_cw_sep(s, c) + 1))) == NULL)
		return (ft_free_split(tab, 0));
	i = 0;
	tab_size = ft_cw_sep(s, c);
	while (i < tab_size)
	{
		while (*s == c)
			s++;
		str_len = ft_strlen_sep(s, c);
		if ((tab[i] = ft_substr(s, 0, str_len)) == NULL)
			return (ft_free_split(tab, i));
		s += str_len;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
