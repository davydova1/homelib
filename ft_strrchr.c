/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:54:25 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:54:26 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		sym;
	char		*dst;
	size_t		size;

	dst = (char *)s;
	sym = (char)c;
	size = ft_strlen(s);
	if (sym == '\0')
		return ((char*)dst + size);
	while (size--)
	{
		if (dst[size] == sym)
			return (&dst[size]);
	}
	return (NULL);
}
