/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 16:27:52 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/23 16:22:17 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	while (begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			tmp = (*begin_list)->next;
			free(*begin_list);
			(*begin_list) = tmp;
			(*begin_list)->next = tmp;
		}
		*begin_list = (*begin_list)->next;
	}
}
