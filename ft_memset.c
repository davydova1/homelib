/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:50:47 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:50:49 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*path;
	unsigned char	sym;

	path = (unsigned char*)dst;
	sym = (unsigned char)c;
	while (n--)
		*path++ = sym;
	return (dst);
}
