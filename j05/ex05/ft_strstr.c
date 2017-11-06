/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 12:23:48 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/06 13:09:45 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		iloop;

	i = 0;
	while (str[i] != '\0')
	{
		iloop = 0;
		while (to_find[iloop] == str[i + iloop])
		{
			if (to_find[iloop + 1] == '\0')
				return (str + i);
			iloop++;
		}
		i++;
	}
	return (0);
}
