/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:30:45 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:30:49 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fl(char str)
{
	if (str == '\t' || str == '\v' || str == '\n')
		return (1);
	else if (str == '\r' || str == '\f' || str == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int			i;
	long		nbr;
	int			s;

	i = 0;
	nbr = 0;
	s = 1;
	while (str[i] && (fl(str[i]) == 1))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
		if (nbr > 2147483647 && s == 1)
			return (-1);
		if (nbr > 2147483648 && s == -1)
			return (0);
	}
	return (nbr * s);
}
