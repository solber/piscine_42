/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 08:10:28 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/04 16:37:44 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	r;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		r = str[i];
		str[i] = str[length - 1];
		str[length - 1] = r;
		i++;
		length--;
	}
	return (str);
}
