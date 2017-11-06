/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 14:21:32 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/06 15:32:58 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str, int i)
{
	if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		return (1);
	if (str[i] == '+' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		return (1);
	if (str[i] == '-' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] > 'a' && str[i] < 'z')
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if (check(str, i))
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
