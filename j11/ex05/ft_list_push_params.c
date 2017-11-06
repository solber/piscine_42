/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:42:40 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/22 15:23:21 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*list;
	t_list		*elem;

	i = 0;
	list = NULL;
	while (i < ac)
	{
		elem = ft_create_elem(av[i]);
		elem->next = list;
		list = elem;
		i++;
	}
	return (list);
}
