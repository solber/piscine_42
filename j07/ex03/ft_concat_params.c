/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:43:48 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/14 18:07:54 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		size;

	size = 0;
	while (size < argc)
	{
		j = 0;
		while (argv[j])
		{
			size++;
			j++;
		}
	}
	str = (char*)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < argc - 1)
	{
		str = ft_strcat(str, argv[i + 1]);
		if (i < argc - 2)
			str = ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
