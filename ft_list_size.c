/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:09:22 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:02:38 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*lst;
	int		i;

	i = 0;
	lst = begin_list;
	while (lst && i++)
		lst = lst->next;
	return (i);
}
