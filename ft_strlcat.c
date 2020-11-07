/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:53:07 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:53:09 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_size;
	size_t		full_size;
	size_t		i;

	if (size == 0)
		return (ft_strlen(src));
	dst_size = ft_strlen(dst);
	full_size = ft_strlen(src) + dst_size;
	i = 0;
	if (size > dst_size)
	{
		i++;
		dst += dst_size;
		size -= (dst_size + 1);
		while (size-- && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	else
		return (ft_strlen(src) + size);
	return (full_size);
}
