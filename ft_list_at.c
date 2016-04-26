/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:02:09 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:02:03 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*lst;
	unsigned int	i;

	i = 1;
	lst = begin_list;
	while (i < nbr && i++)
	{
		if (!lst)
			return (NULL);
		lst = lst->next;
	}
	return (lst);
}
