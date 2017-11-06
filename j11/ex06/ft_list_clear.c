/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 16:02:30 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/22 15:47:18 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	if (begin_list)
	{
		if (*begin_list)
		{
			while (*begin_list)
			{
				tmp = (*begin_list)->next;
				free(*begin_list);
				(*begin_list) = tmp;
			}
			free(tmp);
			*begin_list = NULL;
		}
		begin_list = NULL;
	}
}
