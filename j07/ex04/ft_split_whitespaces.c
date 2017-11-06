/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_withespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 12:52:30 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/14 16:00:10 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		i;
	int		isword;
	int		count;

	i = 0;
	isword = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			isword = 1;
			i++;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			if (isword == 1)
				count += 1;
			else
				count += 2;
			isword = 0;
			i++;
		}
	}
	return (count);
}

int		ft_word_length(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	res = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1));
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			res[j] = (char*)malloc(ft_word_length(str, i) + 1);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
