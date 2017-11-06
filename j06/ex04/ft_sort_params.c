/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 15:53:20 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/07 17:15:20 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strncmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	print(int a, char **b)
{
	int		i;

	i = 0;
	while (++i < a)
	{
		ft_putstr(b[i]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	char	*r;
	int		i;
	int		f;

	f = 1;
	while (f)
	{
		f = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strncmp(argv[i], argv[i + 1]) > 0)
			{
				r = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = r;
				f = 1;
			}
		}
	}
	print(argc, argv);
	return (0);
}
