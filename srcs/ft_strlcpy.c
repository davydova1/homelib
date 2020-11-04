/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:32 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:11:32 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t strlcpy (char *dst, const char *src, size_t size)
{
	unsigned char *str;
	size_t i;
	
	str = (unsigned char *)src;
	i = 0;
	while (*str && i<size )
	{
		*dst++ = *str++;
		i++;
	}
	while (*str)
	{
		i++;
		*str++;
	}
	while (*dst)
	{
		*dst = '\0';
		*dst++;
	}
	return i;
}