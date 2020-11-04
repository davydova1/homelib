/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:12:14 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:12:14 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen (const char *str)
{
	size_t size;
	unsigned char *str1;
	
	size = 0;
	str1 = (unsigned char *)str;
	
	while (*str1++)
		size++;

	return size;
}