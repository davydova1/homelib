/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:35:03 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/03 15:55:03 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	unsigned int i;
	size_t size_s;
	char *dst;
	
	size_s = ft_strlen(s);
	i = 0;
	if (size_s < start)
		{
			if(!(dst =(char*)malloc(sizeof(*s)*1)))
				return (NULL);
			*dst = '\0';
		return (dst);
		}
	if (!(dst = (char*)malloc(sizeof(*s)*(len+1))))
		return (NULL);
	while (i<len)
		{
			dst[i] = s[start+i];
			i++;
		}
	dst[i] = '\0';
	return (dst);
}