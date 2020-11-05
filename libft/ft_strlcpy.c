/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:32 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:45 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*str;
	size_t			i;
	size_t			len;

	str = (unsigned char *)src;
	i = 0;
	len = ft_strlen(src);
	while (str[i] && i < (size - 1))
	{
		dst[i] = str[i];
		++i;
	}
	dst[i] = '\0';
	return (len);
}
