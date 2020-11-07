/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:52:32 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:52:33 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *destination, const char *source, size_t size)
{
	size_t	size1;

	size1 = 0;
	while (source[size1] && size1 < size)
	{
		destination[size1] = source[size1];
		size1++;
	}
	destination[size1] = '\0';
	return (destination);
}
