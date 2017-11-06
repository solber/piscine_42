/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 10:40:29 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/15 08:08:29 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*res;
	int				i;
	int				j;

	res = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		res[i].size_param = j;
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
