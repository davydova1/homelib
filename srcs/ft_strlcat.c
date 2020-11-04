/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:26 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:42 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_size;
	size_t		full_size;

	dst_size = ft_strlen(dst);
	full_size = ft_strlen(src) + ft_strlen(dst);
	if (size > dst_size)
	{
		dst += dst_size;
		size -= (dst_size + 1);
		while (size-- && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (full_size + 1);
}
