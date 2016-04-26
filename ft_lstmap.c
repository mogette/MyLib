/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:56:54 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:08:27 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst2;
	t_list	*begin;

	if (lst == NULL)
		return (NULL);
	if (!(lst2 = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lst2 = f(lst);
	begin = lst2;
	while (lst->next)
	{
		if (!(lst2->next = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		lst = lst->next;
		lst2->next = f(lst);
		lst2 = lst2->next;
	}
	return (begin);
}
