/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:33:18 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/10 09:25:17 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*result;
	int		i;

	if (min >= max)
		return (0);
	result = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < (max))
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
