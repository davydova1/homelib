/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:54 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:04 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)buf1;
	str2 = (unsigned char*)buf2;
	while (*str1++ && *str2++ && count--)
	{
		if (*str1 < *str2)
			return (-1);
		if (*str2 < *str1)
			return (1);
	}
	return (0);
}
