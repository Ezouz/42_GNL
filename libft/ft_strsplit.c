/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehouzard <ehouzard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:36:57 by ehouzard          #+#    #+#             */
/*   Updated: 2017/11/21 20:16:54 by ehouzard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i] >= '!' && s[i] <= '~' && s[i] != c && s[i - 1] == c)
		{
			words++;
			i++;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_count_char(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char		*splitwords(const char *s, size_t *k, char c)
{
	char	*w;
	size_t	i;
	size_t	len;

	len = ft_count_char(s + *k, c);
	if (!(w = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
		w[i++] = s[(*k)++];
	return (w);
}

static char		**splitintab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[k])
	{
		if (s[k] == c)
		{
			k++;
			continue;
		}
		tab[i] = splitwords(s, &k, c);
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_count_words(s, c);
	if (!(tab = ft_memalloc((sizeof(char*) * nb_words) + 1)))
		return (NULL);
	return (splitintab(s, c, tab));
}
