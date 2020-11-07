/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:49:46 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:49:48 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	if (buf1 == buf2 || count == 0)
		return (0);
	str1 = (const unsigned char*)buf1;
	str2 = (const unsigned char*)buf2;
	while (count--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (count)
		{
			str1++;
			str2++;
		}
	}
	return (0);
}
