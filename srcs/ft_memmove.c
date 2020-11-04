/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:07 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:09 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*memmove(void *dest, const void *source, size_t count)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	if (dst < src)
	{
		while (count--)
		{
			*dst++ = *src++;
		}
	}
	else
	{
		dst += count;
		src += count;
		while (count--)
		{
			*--dst = *--src;
		}
	}
	return (dest);
}
