/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:49:14 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:17:14 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char		*ft_strdup(const char *str)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = (char*)malloc(sizeof(*str2) * (ft_strlen(str) + 1));
	if (!str2)
		return (NULL);
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = str[i];
	return (str2);
}
