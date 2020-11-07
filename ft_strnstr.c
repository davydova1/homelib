/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:54:10 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:54:11 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned int	j;
	unsigned int	i;

	if (!*find)
		return ((char*)str);
	j = 0;
	while (str[j] && (size_t)j < len)
	{
		if (str[j] == find[0])
		{
			i = 1;
			while (find[i] && str[j + i] == find[i] && (size_t)(j + i) < len)
				++i;
			if (find[i] == '\0')
				return ((char*)&str[j]);
		}
		++j;
	}
	return (0);
}
