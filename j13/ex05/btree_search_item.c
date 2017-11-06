/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 16:26:50 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/24 16:33:22 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
void *data_ref, int (*cmpf)(void *, void *))
{
	if (root->left)
		btree_search_item((root)->left, data_ref, cmpf);
	if ((*cmpf)(data_ref, (*root).item) == 0)
		return (root);
	if (root->right)
		btree_search_item((root)->right, data_ref, cmpf);
	return (0);
}
