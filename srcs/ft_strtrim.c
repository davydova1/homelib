/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:06:42 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:50:00 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		flag(const char *s, char c)
{
	int			i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static char		*ft_strcpy_trim(const char *src, int start, int end)
{
	int			i;
	char		*str;

	i = 0;
	if (start > end)
		str = (char*)malloc(sizeof(*src) * 1);
	else
	{
		str = (char*)malloc(sizeof(*src) * (end - start + 2));
		if (!(str))
			return (NULL);
		while (start <= end)
		{
			str[i] = src[start];
			start++;
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			start;
	int			end;
	char		*dst;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while ((s1[start] == ' ') || (s1[start] == '\n') || (s1[start] == '\t') || flag(set, s1[start]))
		start++;
	while ((s1[end] == ' ') || (s1[end] == '\n') || (s1[end] == '\t') || flag(set, s1[end]))
		end--;
	dst = ft_strcpy_trim(s1, start, end);
	return (dst);
}
