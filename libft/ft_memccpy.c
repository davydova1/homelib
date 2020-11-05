/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:43 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:48:57 by llemmiwi         ###   ########.fr       */
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
			return ((void*)(dst+i+1));
		++i;
	}
	return (NULL);
}
