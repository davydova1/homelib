/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:19 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:30 by llemmiwi         ###   ########.fr       */
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
