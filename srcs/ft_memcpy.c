/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:00 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:07 by llemmiwi         ###   ########.fr       */
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
	while (count--)
	{
		*path1 = *path2;
		path1++;
		path2++;
	}
	return (dest);
}
