/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 10:48:18 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/17 17:47:44 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*previous;

	previous = 0;
	if (*begin_list)
	{
		list = *begin_list;
		while (list)
		{
			previous = list;
			list = list->next;
		}
		previous->next = ft_create_elem(data);
	}
	else if (begin_list)
		*begin_list = ft_create_elem(data);
}
