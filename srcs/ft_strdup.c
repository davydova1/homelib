/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 19:43:52 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/02 19:43:52 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strdup(const char *str)
{
	char *dst;
	size_t size;
	int i;
	
	i = 0;
	size = ft_strlen(str);
	dst = (char*)malloc(sizeof(*str)*(size+1));
	while(i<size)
		{dst[i]=str[i];
			i++;
		}
	dst[i] = '\0';
	return (dst);
}