/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:10:27 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 18:10:27 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h> 
#include <strings.h>

void bzero (void *s, size_t n)
{
    unsigned char *path;
	
    path = (unsigned char *)s;
	while (n--)
	{
		*path++ = '0';
	}
}
int main() {
	unsigned char str[20] = "hellooooo";
	
    bzero(str, 3);
    
    int i = 0;
    while (str[i++])
		printf("%c", str[i]);
	
	return 0; 
}