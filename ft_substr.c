/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:54:50 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:54:52 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			size_s;
	char			*dst;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	i = 0;
	if (size_s < start)
	{
		if (!(dst = (char*)malloc(sizeof(*s) * 1)))
			return (NULL);
		*dst = '\0';
		return (dst);
	}
	if (!(dst = (char*)malloc(sizeof(*s) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
