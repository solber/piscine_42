/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 09:12:29 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/06 08:45:52 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int negative;

	negative = 0;
	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f')
		str++;
	while (*str == '\r' || *str == '\v')
		str++;
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			i = (i * 10) + (*str - '0');
		else
			return (0);
		str++;
	}
	return ((i > 0 && negative ? -i : i));
}
