/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:19 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:11:19 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strchr(const char *str, int ch)
{
	unsigned char *str1 = (unsigned char *)str;
	unsigned char s = (unsigned char)ch;
	
	while (*str1++)
	{
		if (*str1 == s)
			return (str1);
	}
	
	return (NULL);
}