/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:43:26 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:33 by llemmiwi         ###   ########.fr       */
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
