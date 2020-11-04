/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:47 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:53 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1++ && *str2++ && n--)
	{
		if (*str1 > *str2)
			return (1);
		if (*str1 < *str2)
			return (-1);
	}
	return (0);
}
