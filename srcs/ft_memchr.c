/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:50 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:10:50 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memchr(const void *buffer, int ch, size_t count)
{
	unsigned char *str;
	unsigned char s;
	
	str = (unsigned char*)buffer;
	s = (unsigned char)ch;
	
	while (*str++)
	{
		if (*str==s)
			return (str);
		
	}
	return (NULL);
}
