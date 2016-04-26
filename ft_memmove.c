/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:04:29 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:13:01 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*src2;
	char		*dst2;

	dst2 = dst;
	src2 = src;
	if (src2 < dst2)
	{
		src2 = src2 + len;
		dst2 = dst2 + len;
		while (len-- && dst2-- && src2--)
			*dst2 = *src2;
	}
	else
	{
		while (len--)
		{
			*dst2 = *src2;
			dst2++;
			src2++;
		}
	}
	return (dst);
}
