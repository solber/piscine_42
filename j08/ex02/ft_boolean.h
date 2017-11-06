/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:11:19 by wnoth             #+#    #+#             */
/*   Updated: 2017/08/14 16:12:23 by wnoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define SUCCESS		0
# define EVEN_MSG		"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"

typedef int				t_bool;
# define TRUE			1
# define FALSE			0

# define EVEN(x)		((x % 2) ? 0 : 1)
#endif
