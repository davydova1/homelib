/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:53 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:56 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	char		sym;
	char 		*dst;
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
