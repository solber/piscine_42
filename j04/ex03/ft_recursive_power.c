/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:03:36 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/05 14:16:40 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
