/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:36:55 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:21:42 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

static int		ft_words(const char *s, char c)
{
	int		j;
	int		in_string;

	in_string = 0;
	j = 0;
	while (*s != '\0')
	{
		if (in_string == 1 && *s == c)
			in_string = 0;
		if (in_string == 0 && *s != c)
		{
			in_string = 1;
			j++;
		}
		s++;
	}
	return (j);
}

static int		ft_wlen(const char *s, char c)
{
	int		k;

	k = 0;
	while (*s != c && *s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		word;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	word = ft_words((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * (ft_words((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[i] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		i++;
	}
	t[i] = NULL;
	return (t);
}
