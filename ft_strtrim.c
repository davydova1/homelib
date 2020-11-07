/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:54:37 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:54:38 by llemmiwi         ###   ########.fr       */
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
	str = (char*)malloc(sizeof(*str) * (end - start + 2));
	if (!(str))
		return (NULL);
	while (start <= end)
	{
		str[i] = src[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int			st;
	int			e;
	char		*dst;

	if (!s1)
		return (NULL);
	st = 0;
	e = ft_strlen(s1) - 1;
	while (flag(set, s1[st]))
		st++;
	if (s1[st] == '\0')
		return (ft_strdup(""));
	while (flag(set, s1[e]))
		e--;
	if (e == -1)
		return (ft_strdup(""));
	dst = ft_strcpy_trim(s1, st, e);
	return (dst);
}
