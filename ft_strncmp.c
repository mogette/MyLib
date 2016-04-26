/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:20:19 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:19:51 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 == *str2 && 0 < n)
	{
		if (*str1 == '\0')
			return (0);
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	else if (*(unsigned char*)str1 > *(unsigned char*)str2)
		return (1);
	else if (*(unsigned char*)str1 < *(unsigned char*)str2)
		return (-1);
	return (0);
}
