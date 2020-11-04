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

char			*ft_strchr(const char *str, int ch)
{
	size_t		size;
	char		sym;

	size = ft_strlen(str);
	sym = (char)ch;
	if (sym == '\0')
		return ((char *)str + size);
	while (size--)
	{
		if (*(str + size) == sym)
			return ((char *)(str + size));
	}
	return (NULL);
}
