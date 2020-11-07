/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:31:16 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:31:18 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t num, size_t size)
{
	char			*str;
	unsigned int	all;
	unsigned int	i;

	i = 0;
	all = (unsigned int)num * size;
	if (!(str = malloc(all)))
		return (NULL);
	while (all--)
		str[i++] = 0;
	return ((void*)str);
}
