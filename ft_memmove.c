/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:50:36 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:50:38 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dest, const void *source, size_t count)
{
	unsigned char	*dst;
	unsigned char	*src;

	if (dest == source)
		return (dest);
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
