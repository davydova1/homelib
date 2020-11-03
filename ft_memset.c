/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:11:13 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:11:13 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 

void *memset (void *dst, int c, size_t n)
{
	unsigned char *path;
	unsigned char sym;

	path = (unsigned char*)dst;
	sym = (unsigned char)c;
	while (n--)
	{
		*path++ = sym;
	}
	return dst;
}

int main() {
	unsigned char str[20] = "hellooooo";
	int s = 'k';
	
    memset(str, s, 3);
    int i = 0;
    while (str[i++])
		printf("%c", str[i]);
	
	return 0; 
}