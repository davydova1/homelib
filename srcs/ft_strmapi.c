/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:15:12 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 13:15:12 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dst;
	size_t size;
	int i;
	
	i = 0;
	size = ft_strlen(s);
	dst = (char*)malloc(sizeof(*s)*(size+1));
	if ((!dst)||(!f)||(!s))
		return (NULL);
	while (s[i])
		{
			dst[i] = f(i, s[i]);
			i++;
		}
	return dst;
}