/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 15:09:38 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:01:40 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

static	void	ft_length(int n, int *mem, int *j)
{
	*j = 1;
	*mem = 1;
	if (n >= 0 && (*mem)--)
		n = -n;
	while (++(*mem) && (n / *j) < -9)
		*j = *j * 10;
}

char			*ft_itoa(int n)
{
	int			j;
	int			mem;
	int			i;
	char		*str;

	i = 0;
	ft_length(n, &mem, &j);
	if (n == 0)
		mem = 1;
	str = (char *)malloc(sizeof(*str) * (mem + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (j >= 1)
	{
		str[i++] = ft_abs((n / j) % 10) + '0';
		j = j / 10;
	}
	str[i] = '\0';
	return (str);
}
