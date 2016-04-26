/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:15:54 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:20:48 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

char				*ft_strnew(size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * (size + 1));
	if (tmp)
	{
		while (size > i)
		{
			tmp[i] = '\0';
			i++;
		}
		tmp[i] = '\0';
		return ((char*)tmp);
	}
	else
		return (NULL);
}
