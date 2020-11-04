/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:56:40 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:52:31 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		s;

	i = 0;
	nbr = 0;
	s = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == ' '))
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
	}
	return (nbr * s);
}
