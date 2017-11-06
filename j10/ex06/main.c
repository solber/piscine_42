/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:39:34 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/14 15:26:29 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ismodulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(modulo(a, b));
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] == '+')
		ft_putnbr(plus(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-')
		ft_putnbr(less(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*')
		ft_putnbr(times(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(divide(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (argv[2][0] == '%')
		ismodulo(ft_atoi(argv[1]), ft_atoi(argv[3]));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
