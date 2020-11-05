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
