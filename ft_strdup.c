/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:56:53 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:56:54 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*dst;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(str);
	if (!(dst = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
