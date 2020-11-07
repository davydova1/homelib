/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:49:33 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:49:34 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memchr(const void *buffer, int ch, size_t count)
{
	unsigned char	*str;
	unsigned char	s;
	int				i;

	str = (unsigned char*)buffer;
	s = (unsigned char)ch;
	i = 0;
	while (count--)
	{
		if (str[i] == s)
			return (str + i);
		i++;
	}
	return (NULL);
}
