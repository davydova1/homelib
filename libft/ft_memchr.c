/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:50 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:48:59 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memchr(const void *buffer, int ch, size_t count)
{
	unsigned char	*str;
	unsigned char	s;
	int 			i;

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
