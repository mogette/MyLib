/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:07:06 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:21:05 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (*s2 == '\0')
		return ((char*)&s1[i]);
	while ((size_t)i < n && s1[i] != '\0')
	{
		j = 0;
		k = i;
		while (s1[k] == s2[j] && (size_t)k < n)
		{
			k++;
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
