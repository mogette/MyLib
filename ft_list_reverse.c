/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 17:04:58 by clapeyre          #+#    #+#             */
/*   Updated: 2016/02/18 17:02:19 by clapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*lst;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = NULL;
	lst = *begin_list;
	if (!lst || !(lst->next))
		return ;
	tmp = lst->next;
	tmp2 = tmp->next;
	lst->next = NULL;
	tmp->next = lst;
	while (tmp2)
	{
		lst = tmp;
		tmp = tmp2;
		tmp2 = tmp2->next;
		tmp->next = lst;
	}
	*begin_list = tmp;
}
