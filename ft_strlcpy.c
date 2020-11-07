/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:56:33 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:56:35 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*str;
	size_t			i;
	size_t			len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	str = (unsigned char *)src;
	i = 0;
	while (str[i] && i < (size - 1))
	{
		dst[i] = str[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}
