/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:50:15 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:50:20 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memcpy(void *dest, const void *source, size_t count)
{
	unsigned char	*path1;
	unsigned char	*path2;

	path1 = (unsigned char*)dest;
	path2 = (unsigned char*)source;
	if (!count || dest == source)
		return (dest);
	while (count--)
	{
		*path1 = *path2;
		path1++;
		path2++;
	}
	return (dest);
}
