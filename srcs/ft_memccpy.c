/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:43 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:10:43 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	unsigned char *dst;
	unsigned char *src;
	unsigned char s;

	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	s = (unsigned char)ch;
	while (count--)
	{
		*dst++=*src;
		if (*src == s)
			return dst;
		*src++;
	}
	return (NULL);
}