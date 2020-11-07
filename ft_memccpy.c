/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:49:16 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:49:17 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	unsigned char	*dst;
	unsigned char	*src;
	unsigned char	s;
	size_t			i;

	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	s = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		dst[i] = src[i];
		if (dst[i] == s)
			return ((void*)(dst + i + 1));
		++i;
	}
	return (NULL);
}
