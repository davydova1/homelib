/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:52:23 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:52:24 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	unsigned char	*str1;
	unsigned char	ch;
	int				i;

	i = 0;
	str1 = (unsigned char *)s;
	ch = (unsigned char)c;
	while (str1[i])
	{
		if (str1[i] == ch)
			return ((char *)str1 + i);
		i++;
	}
	if (str1[i] == '\0' && ch == '\0')
		return ((char *)str1 + i);
	return (NULL);
}
