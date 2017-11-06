/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 15:02:00 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/15 08:09:43 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_par.h"

void					ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void					ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-	2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void					ft_show_tab(struct s_stock_par *par)
{
	int		i;

	while (par)
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		i = 0;
		while (par->tab[i] != '\0')
		{
			ft_putstr(par->tab[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
