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

char				*ft_strchr(const char *str, int ch)
{
	unsigned char	*str1;
	unsigned char	s;

	*str1 = (unsigned char *)str;
	s = (unsigned char)ch;
	while (*str1++)
	{
		if (*str1 == s)
			return (str1);
	}
	return (NULL);
}
