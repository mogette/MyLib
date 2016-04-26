/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:04:16 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:09:36 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*dst2;
	const char		*src2;
	unsigned char	c2;

	src2 = src;
	dst2 = dst;
	c2 = (unsigned char)c;
	while (n > 0 && *((unsigned char*)src2) != c2)
	{
		*dst2 = *src2;
		dst2++;
		src2++;
		n--;
	}
	if (n > 0)
	{
		*dst2 = *src2;
		dst2++;
		return ((void*)(dst2));
	}
	else
		return (NULL);
}
