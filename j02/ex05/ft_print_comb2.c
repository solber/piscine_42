/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 14:28:30 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/03 20:04:15 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int a, int b)
{
	int a1;
	int a2;
	int b1;
	int b2;

	a1 = a / 10 + 48;
	a2 = a % 10 + 48;
	b1 = b / 10 + 48;
	b2 = b % 10 + 48;
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 99)
	{
		while (b < 99)
		{
			b++;
			ft_print(a, b);
		}
		a++;
		b = a;
	}
}
