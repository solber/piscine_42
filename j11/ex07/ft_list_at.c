/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 12:07:34 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/22 15:32:40 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;

	i = 0;
	while (i < nbr)
	{
		if (begin_list)
			begin_list = begin_list->next;
		else
			return (NULL);
		i++;
	}
	return (begin_list);
}
