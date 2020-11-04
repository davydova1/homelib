/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:36 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:10:36 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void *ft_calloc(size_t num, size_t size)
{
	char *str;
	
	str = malloc(num*size);
	if (!(str))
		return (NULL);
	while (*str++)
		*str = 0;
	return ((void*)str);
}