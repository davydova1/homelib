/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:27 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:53:15 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*path;

	path = (unsigned char *)s;
	while (n--)
		*path++ = '0';
}
