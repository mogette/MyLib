/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:06:24 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:18:28 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		i;
	char		*dst2;
	const char	*src2;

	src2 = src;
	dst2 = dst;
	i = size;
	while (i-- && *dst2 != '\0')
		dst2++;
	dstlen = dst2 - dst;
	i = size - dstlen;
	if (i == 0)
		return (dstlen + ft_strlen(src2));
	while (*src2 != '\0')
	{
		if (i != 1 && i--)
		{
			*dst2 = *src2;
			dst2++;
		}
		src2++;
	}
	*dst2 = '\0';
	return (dstlen + (src2 - src));
}
