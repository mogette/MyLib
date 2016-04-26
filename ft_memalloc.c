/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:34:06 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:09:11 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

void				*ft_memalloc(size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = NULL;
	tmp = (unsigned char *)malloc(sizeof(*tmp) * size);
	if (tmp)
	{
		while (size > i)
		{
			tmp[i] = 0;
			i++;
		}
		return ((void*)tmp);
	}
	return (NULL);
}
