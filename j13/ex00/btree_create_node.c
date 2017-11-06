/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 15:52:55 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/24 15:54:08 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree			*btree_create_node(void *item)
{
	t_btree		*node;

	node = malloc(sizeof(t_btree));
	if (node != NULL)
	{
		node->item = item;
		node->right = 0;
		node->left = 0;
	}
	return (node);
}
